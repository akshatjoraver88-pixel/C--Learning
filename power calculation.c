#include <stdio.h>
#include <stdlib.h>
int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}
int main () { 

    int result = power(2, 5);
    printf("power: %d", result);

    return 0;
}
