extern "C" {
// Add the header files required to run your main
#include <stdio.h>

#include "fib.h"
#include "sumn.h"
}

// File for sandboxing and trying out code
int main(int argc, char **argv) {
    for (size_t i = 1; i < 11; i++) {
        /* code */
        printf("%d: %d \n", i, fib(i, 1, 1));
    }

    return 0;
}