#include "sumn.h"

#include <stdio.h>

int sumn(int n) {
    if (n > 1) {
        return (2 * n - 1) + sumn(n - 1);
    } else {
        return 1;
    }
    return 0;
}