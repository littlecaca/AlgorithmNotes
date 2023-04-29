/*
 * A+B and C(64bit)
 */

#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int my_solution(int argc, char const *argv[]) {
    // 思路: 由於a+b會超出longlong的上限, 所以可以转换成商和余数的形式
    int num;
    long long inputs[10][3];
    long long temp;

    scanf("%d", &num);
    for (int i = 0; i < num; i++)
        scanf("%lld%lld%lld", &inputs[i][0], &inputs[i][1], &inputs[i][2]);

    for (int i = 1; i <= num; i++) {
        lldiv_t div_a = lldiv(inputs[i - 1][0], 100),
                div_b = lldiv(inputs[i - 1][1], 100),
                div_c = lldiv(inputs[i - 1][2], 100);
        if (div_a.quot + div_b.quot < div_c.quot)
            printf("Case #%d: false", i);
        else if (div_a.quot + div_b.quot > div_c.quot)
            printf("Case #%d: true", i);
        else {
            if (div_a.rem + div_b.rem > div_c.rem)
                printf("Case #%d: true", i);
            else
                printf("Case #%d: false", i);
        }
        if (i != num)
            putchar('\n');
    }
    return 0;
}

int main(int argc, char const *argv[]) {
    /*
    标准解法: 分析溢出的情况.

    (1) a + b正溢出, 此时必有a > 0, b > 0, -2**63 <= a + b < -2, 这也是充分条件
        因为a + b最大为(2**63 - 1) + (2**63 - 1) = 2**64 - 2, 可得右边界为-2.

    (2) a + b负溢出, 同理, 其充要条件为a < 0, b < 0, a + b >= 0.
    */
   
    int T, tcase = 1;
    scanf("%d", &T);
    while (T--) {
        long long a, b, c;
        // ...略
    }
    return 0;
}