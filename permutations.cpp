// Angelina Htun

#include "permutations.h"
#include "randint.h"
#include <cstddef>
#include <algorithm> // for std::swap


// A sequential search function, for your convenience.
// Parameters:
//  array - The array of int's to be searched
//  size - The size of the array
//  target - The target value
// Returns:
//  Array index where target is found, or size if target is not found.
// Example:
//  if (search(array, size, x) < size)
//      cout << "x was found in the array\n";
//  else
//      cout << "x was not found in the array\n";
static size_t search (const int array[], size_t size, int target) {
    for (size_t i = 0; i < size; i++)
    if (array[i] == target)
        return i;
    return size;
}

void permutations1 (int array[], size_t size) {
    // Draw a number in [1..N] for each position; reject if already used.
    for (size_t i = 0; i < size; ++i) {
        int candidate;
        do {
            candidate = static_cast<int>(randint(static_cast<unsigned int>(size))) + 1; // 1..N
        } while (search(array, i, candidate) < i); // already used in array[0..i-1]
        array[i] = candidate;
    }
}

void permutations2 (int array[], size_t size) {
    // Place 1..N into random empty slots (array starts as all zeros).
    size_t placed = 0;
    while (placed < size) {
        size_t pos = static_cast<size_t>(randint(static_cast<unsigned int>(size))); // 0..N-1
        if (array[pos] == 0) {
            array[pos] = static_cast<int>(placed + 1);
            ++placed;
        }
    }
}

void permutations3 (int array[], size_t size) {
    // Fisher–Yates shuffle: init to 1..N, then swap downward.
    for (size_t i = 0; i < size; ++i)
        array[i] = static_cast<int>(i + 1);

    for (size_t i = size; i > 1; --i) {
        size_t j = static_cast<size_t>(randint(static_cast<unsigned int>(i))); // 0..i-1
        std::swap(array[i - 1], array[j]);
    }
}
