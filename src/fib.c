/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h> /* assert */
#include <stdio.h>  /* printf */

/* Fibonacci function definition */
int fib(int n, int p, int pp) {
    assert(n >= 1);

    if (n == 1) {
        return p;  // Base case
    } else {
        return fib(n - 1, pp, p + pp);  // Iterative step, shift the pp down,
                                        // and calculate next fib number
    }

    return 0;
}
