#include "calc.h"

int mul(int a, int b) {
    return a * b;
}

int divi(int a, int b) {
    if (b == 0) {
        return 0;  // 0œZ‘Îô
    }
    return a / b;
}
