#include <stdio.h>
#include <windows.h>
int ftc4() {
    SetConsoleOutputCP(65001);
    int N;

    // 获取用户输入（2 到 9 之间）
    printf("请输入 N（2 到 9 之间的整数）：");
    scanf("%d", &N);

    // 简单的范围检查
    if (N < 2 || N > 9) {
        printf("输入错误，N 必须在 2 到 9 之间。\n");
        return 1;
    }

    // 打印表头（列标）
    printf("   |");
    for (int col = 1; col <= N; col++) {
        printf("%4d", col);
    }
    printf("\n");

    // 打印分隔线
    printf("---|");
    for (int col = 1; col <= N; col++) {
        printf("----");
    }
    printf("\n");

    // 打印表格内容（嵌套循环）
    for (int row = 1; row <= N; row++) {
        // 行标
        printf("%2d |", row);
        // 列内容
        for (int col = 1; col <= N; col++) {
            printf("%4d", row * col);
        }
        printf("\n");
    }

    return 0;
}
int main() {
    ftc4();
    printf("Copyright (c) 2026 Chenpiyang All rights reserved. \n");
}