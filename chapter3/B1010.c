#include <stdio.h>

int main(int argc, char const *argv[]) {
    int coefficient, exponent;
    // wrong solution, ignoring the coefficient additions
    if (scanf("%d%d", &coefficient, &exponent) != EOF) {
        printf("%d %d", coefficient * exponent, exponent - 1);
        while (scanf("%d%d", &coefficient, &exponent) != EOF) {
            if (exponent != 0)
                printf(" %d %d", coefficient * exponent, exponent - 1);
        }
    }
    return 0;
}
