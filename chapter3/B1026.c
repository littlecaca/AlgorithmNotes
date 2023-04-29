#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define CLK_TCK 100
#define TEST(arg) \
    printf("%d\n", arg);

int main()
{
    int c1, c2, minutes, hours, seconds;

    printf("Please the c1 and c2:\n");
    scanf("%d%d", &c1, &c2);
    seconds = (int)round((c2 - c1) / (float)CLK_TCK);
    hours = seconds / 3600;          // get the hour number
    minutes = (seconds % 3600) / 60; // get the minute number
    seconds = (seconds % 3600) % 60; // get the second numer
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}