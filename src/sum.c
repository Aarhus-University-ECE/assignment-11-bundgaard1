#include "sum.h"

#include <assert.h>
#include <stdio.h>

/* Sum integers 1 to n */
int sum(int n) {
    /* pre-condition */
    assert(n >= 1);
    /* post-condition */
    if (n > 1)
        return n + sum(n - 1);
    else
        return 1;
}

/* Sum integers 1 to n */
int sumtail(int n, int total) {
    assert(n >= 1);

    if (n > 1) return sumtail(n - 1, total + n);
    // Use running total for the tail recursion
    else
        return 1 + total;
    // Base case
}

/* Sum integers 1 to n */
int sumwhile(int n) {
    assert(n >= 1);  // Precondition.
    int sum = 0;     // Running sum
    while (n > 0) {
        sum += n;  // Add to sum
        n--;       // Decrement
    }

    return sum;
}
