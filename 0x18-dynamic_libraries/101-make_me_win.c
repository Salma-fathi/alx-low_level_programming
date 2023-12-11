#include <stdio.h>

unsigned int rand(void) {
    return 9;
}

unsigned int rand_r(unsigned int *seed) {
    (void)seed;
    return 9;
}
