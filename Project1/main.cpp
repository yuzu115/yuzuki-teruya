#include <stdio.h>
#include "calc.h"

int main() {
    int a = 20;
    int b = 5;

    printf("=== l‘¥‰‰ZƒvƒƒOƒ‰ƒ€ ===\n");

    printf("‘«‚µZ: %d + %d = %d\n", a, b, add(a, b));
    printf("ˆø‚«Z: %d - %d = %d\n", a, b, sub(a, b));
    printf("Š|‚¯Z: %d * %d = %d\n", a, b, mul(a, b));

    if (b != 0) {
        printf("Š„‚èZ: %d / %d = %d\n", a, b, divi(a, b));
    }
    else {
        printf("Š„‚èZ: 0‚ÅŠ„‚é‚±‚Æ‚Í‚Å‚«‚Ü‚¹‚ñ\n");
    }

    return 0;
}
