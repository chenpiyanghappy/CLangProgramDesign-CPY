#include <stdio.h>
#include <windows.h>
int test() {
    SetConsoleOutputCP(65001);
    int num;
    int hundreds, tens, ones;

    // 获取用户输入
    printf("请输入一个三位整数: ");
    scanf("%d", &num);

    // 拆分各位数字
    hundreds = num / 100;           // 百位
    tens = (num / 10) % 10;         // 十位
    ones = num % 10;                // 个位

    // 输出结果
    printf("百位: %d\n", hundreds);
    printf("十位: %d\n", tens);
    printf("个位: %d\n", ones);
    return 0;
}
int main() {
    test();
    printf("Copyright (c) 2026 Chenpiyang All rights reserved. \n");
}