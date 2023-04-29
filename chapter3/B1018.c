/*
锤子剪刀布
*/
#include <stdio.h>

int convert(char gesture) {
    if (gesture == 'B') return 0;
    if (gesture == 'C') return 1;
    if (gesture == 'J') return 2;
}

int main() {
    int n, a_win = 0, b_win = 0;
    int data[2][3] = {0};
    char r1, r2;
    char gs[] = {'B', 'C', 'J'};

    // 获取n
    printf("Please input the N:\n");
    scanf("%d", &n);
    if (n <= 0) return -1;

    // 获取双方手势
    for (int i = 0; i < n; i++) {
        getchar();
        scanf("%c %c", &r1, &r2);
        r1 = convert(r1);
        r2 = convert(r2);
        // 判断赢家输家
        if ((r1 + 1) % 3 == r2) {
            a_win++;
            data[0][r1]++;
        } else if ((r2 + 1) == r1) {
            b_win++;
            data[1][r2]++;
        }
    }
    
    // 输出结果
    printf("%d %d %d\n", a_win, n - a_win - b_win, b_win);
    printf("%d %d %d\n", b_win, n - a_win - b_win, a_win);
    r1 = 0;
    r2 = 0;
    for (int i = 1; i < 3; i++) {
        if (data[0][i] > data[0][r1]) r1 = i;
        if (data[1][i] > data[0][r2]) r2 = i;
    }
    printf("%c %c", gs[r1], gs[r2]);
    return 0;
}