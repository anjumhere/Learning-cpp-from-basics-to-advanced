/*
 * CONCEPT: Memory Leaks & Dangling Pointers
 * Memory obtained with new stays reserved until you hand it back
 * with delete. Missing deletes LEAK memory — heap usage keeps
 * growing. Deleting too early leaves DANGLING pointers that still
 * store the old address; using them is undefined behavior. The habit
 * "delete, then immediately nullptr" defuses both bugs.
 * Analogy: a hotel key card — checking out erases the card's access;
 * keeping a copied card lets someone walk into a stranger's room.
 */
#include <iostream>

using std::cout;

int main() {

  // ----------------------------------------------------
  // STEP 1: Proper pair — every new gets exactly one delete (active — compile & run as-is)
  // ----------------------------------------------------
  int *p = new int; // reserve room for one int on the heap
  *p = 42;

  cout << "Allocated at address " << p << ", it holds " << *p << '\n';

  delete p; // hand the memory back — exactly once
  p = nullptr;

  cout << "Released cleanly. Nothing leaked.\n";

  // ----------------------------------------------------
  // STEP 2: What a memory leak looks like
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: RAM usage climbs by roughly 38 MB while the loop runs
  //     (watch a system monitor). Each iteration allocates an int whose
  //     address is thrown away, so nothing can ever free it — the OS only
  //     reclaims it when the program exits. The loop is bounded on purpose,
  //     so running the program repeatedly is safe.
  // ----------------------------------------------------
  /*
  const int kLeakedInts = 10000000; // 10 million ints ≈ 38 MB — bounded on purpose

  cout << "Leaking " << kLeakedInts << " ints, one new per iteration...\n";

  for (int i = 0; i < kLeakedInts; i++) {
    new int(i); // allocated, then the address is lost forever — LEAKED
  }

  cout << "Done leaking about "
       << (kLeakedInts * sizeof(int)) / (1024 * 1024)
       << " MB. The OS reclaims it when the program exits.\n";
  */

  // ----------------------------------------------------
  // STEP 3: Dangling pointer danger
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: after delete, stillHolding still stores the old address.
  //     Reading through it is undefined behavior — it often still prints 7
  //     by luck, but the program no longer owns that memory, and WRITING
  //     through it could corrupt the heap.
  // ----------------------------------------------------
  /*
  int *dangling = new int(7);
  int *stillHolding = dangling; // a second pointer to the SAME memory

  cout << "Before delete, the value is " << *stillHolding << '\n';

  delete dangling; // the memory goes back to the system...

  // DANGER: reading through a dangling pointer — undefined behavior!
  cout << "After delete, reading anyway: " << *stillHolding << '\n';
  */

  // ----------------------------------------------------
  // STEP 4: The fix pattern — delete, then nullptr
  // >>> UNCOMMENT the block below, then compile and run.
  // >>> Observe: after risky = nullptr, testing the pointer is safe, and
  //     even a second delete is harmless because deleting nullptr does
  //     nothing. This two-line pattern prevents both leaks and dangling
  //     accesses.
  // ----------------------------------------------------
  /*
  int *risky = new int(123);

  cout << "risky holds " << *risky << '\n';

  delete risky;
  risky = nullptr; // THE FIX: destroy the stale address immediately

  if (risky != nullptr) {
    cout << "risky still claims memory (bad!)\n";
  } else {
    cout << "risky points to nothing — now it is safe to test\n";
  }

  delete risky; // legal and safe: deleting nullptr does nothing
  cout << "Double-delete avoided thanks to nullptr.\n";
  */

  return 0;
}
