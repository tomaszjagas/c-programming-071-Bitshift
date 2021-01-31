#include <stdio.h>

int main(void) {
    int w1 = 1; // 0000 0000 0000 0000 0000 0000 0000 0001
    unsigned int w2 = 5; // 0000 0000 0000 0000 0000 0000 0000 0101
    signed int w3 = 138; // 1000 1010
    int result = 0;

    result = w1 << 2; // 0000 0000 0000 0000 0000 0000 0000 0100
    printf("result = %d\n", result);

    result = w2 >> 1; // 0000 0000 0000 0000 0000 0000 0000 0010
    printf("result = %d\n", result);

    result = w3 >> 2;
    printf("result = %d", result); // 0010 0010

    return 0;
}