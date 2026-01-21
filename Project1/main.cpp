#include <stdio.h>
#include "calc.h"

int main() {
    int a = 20;
    int b = 5;

    printf("‘«‚µŽZ: %d + %d = %d\n", a, b, add(a, b));
    printf("ˆø‚«ŽZ: %d - %d = %d\n", a, b, sub(a, b));
    printf("Š|‚¯ŽZ: %d * %d = %d\n", a, b, mul(a, b));
    printf("Š„‚èŽZ: %d / %d = %d\n", a, b, divi(a, b));

    return 0;
}
