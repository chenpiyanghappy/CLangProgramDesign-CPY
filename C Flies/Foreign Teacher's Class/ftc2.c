#include <stdio.h>
#include <windows.h>
int ftc2() {
    int a, b;
    SetConsoleOutputCP(65001);
    // 输入两个整数
    printf("请输入两个整数（用空格分隔）：");
    scanf("%d %d", &a, &b);

    // 计算并输出
    printf("和：%d\n", a + b);
    printf("差（第一个减第二个）：%d\n", a - b);
    printf("积：%d\n", a * b);

    if (b != 0) {
        printf("整除的商：%d\n", a / b);
        printf("余数：%d\n", a % b);
    } else {
        printf("除数为0，无法计算商和余数。\n");
    }

    return 0;
}
int main() {
    ftc2();
    printf("Copyright (c) 2026 Chenpiyang All rights reserved. \n");
}