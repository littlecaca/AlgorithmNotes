/*
数字分类
*/

#include <stdio.h>

int main()
{
    int n, temp, a1 = 0, a2 = 0, a3 = 0, a5 = 0;
    float a4 = 0.;
    int count = 0;   // for a4
    int flag = 1;    // for a2
    int have_a2 = 0; // for a2

    // 获取输入数字
    printf("Please input the N:\n");
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &temp);
        switch (temp % 5)
        {
        case 0:
            // 能被5整除
            if (temp % 2 == 0)
                a1 += temp;
            break;
        case 1:
            // 被5整除后余1
            a2 += flag * temp;
            flag = -flag;
            have_a2 = 1;
            break;
        case 2:
            // 被5整除后余2
            a3++;
            break;
        case 3:
            // 被5整除后余3
            count++;
            a4 += temp;
            break;
        case 4:
            // 被5整除后余4
            if (temp > a5)
                a5 = temp;
            break;
        default:
            break;
        }
    }

    // 输出
    if (a1 == 0)
        printf("%c ", 'N');
    else
        printf("%d ", a1);
    if (!have_a2)
        printf("%c ", 'N');
    else
        printf("%d ", a2);
    if (a3 == 0)
        printf("%c ", 'N');
    else
        printf("%d ", a3);
    if (a4 == 0)
        printf("%c ", 'N');
    else
        printf("%.1f ", a4 / count);
    if (a5 == 0)
        printf("%c ", 'N');
    else
        printf("%d", a5);

    return 0;
}