/*
 * CONCEPT: Passing Arrays to Functions
 * A function is a named, reusable block of code: you call it by name,
 * pass inputs in, and get a result back (full coverage in 04_functions).
 * Builds on: function basics from 01_basics/12_function_basics.cpp.
 * Here getTotal() receives the array together with its size, adds up the
 * elements, and returns the total — so the summing logic exists once and
 * works for any double array. Analogy: handing a shopping list to a
 * cashier who totals the bill for you.
 */

#include <iostream>

using std::cout;
using std::string;

/*
 * ----------------------------------------------------------------
 * Sums all prices in an array and returns the total
 * ----------------------------------------------------------------
 */
double getTotal(double prices[], int arraySize);

int main() {
    // ----------------------------------------------------
    // STEP 1: Set up the price data (active — compile & run as-is)
    // ----------------------------------------------------
    double prices[] = {55.99, 23.94, 33.55, 105.99};
    int size_of_array = sizeof(prices) / sizeof(prices[0]);

    // First look at the raw data that will be summed.
    for (int i = 0; i < size_of_array; i++) {
        cout << "Price #" << i << " = " << prices[i] << '\n';
    }

    // ----------------------------------------------------
    // STEP 2: Sum the array by hand
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: the running-total pattern — start at 0 and add each
    // >>> element in turn. Every summation boils down to these few lines.
    // ----------------------------------------------------
    /*
    double sum = 0;
    for (int i = 0; i < size_of_array; i++) {
      sum += prices[i];
    }
    cout << "Manual total = " << setprecision(5) << std::fixed << sum << '\n';
    */

    // ----------------------------------------------------
    // STEP 3: Sum via getTotal()
    // >>> UNCOMMENT the block below, then compile and run.
    // >>> Observe: one call replaces the whole loop — main() stays short,
    // >>> and getTotal() can be reused with any double array.
    // ----------------------------------------------------
    /*
    double total = getTotal(prices, size_of_array);
    cout << "Total price = " << setprecision(5) << std::fixed << total << '\n';
    */

    return 0;
}

double getTotal(double prices[], int arraySize) {
    double total = 0;
    for (int i = 0; i < arraySize; i++) {
        total += prices[i];
    }
    return total;
}
