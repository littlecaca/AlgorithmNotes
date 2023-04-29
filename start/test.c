#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2;

    int r1 = scanf("%d", &num1);
    printf("next");
    int r2 = scanf("%d", &num2);

    if (r1 == EOF)
        printf("\nr1 EOF");
    else
        printf("\nr1 %d", num1);
    if (r2 == EOF)
        printf("\nr2 EOF");
    else 
        printf("\nr1 %d", num2);

    printf("\n");
    return 0;
}
