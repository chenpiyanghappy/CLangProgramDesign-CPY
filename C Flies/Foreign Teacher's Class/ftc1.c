#include <stdio.h>
#include <windows.h>
int ftc1 () {
    // 使用 sizeof 获取各类型的大小（字节）
     SetConsoleOutputCP(65001);
    printf("当前系统下各类型的大小（字节）：\n");
    printf("char        : %zu\n", sizeof(char));
    printf("int         : %zu\n", sizeof(int));
    printf("short       : %zu\n", sizeof(short));
    printf("long        : %zu\n", sizeof(long));
    printf("long long   : %zu\n", sizeof(long long));
    printf("float       : %zu\n", sizeof(float));
    printf("double      : %zu\n", sizeof(double));

    // 理论知识对比
    printf("\n--- 与理论知识的比较 ---\n");
    printf("C标准规定：\n");
    printf("  sizeof(char)   == 1  (固定)\n");
    printf("  sizeof(short)  >= 2, sizeof(int) >= 2, sizeof(long) >= 4\n");
    printf("  sizeof(long long) >= 8\n");
    printf("  sizeof(float)  >= 4, sizeof(double) >= 8\n");
    printf("实际值通常取决于编译器和硬件架构（如32位/64位）。\n");

    return 0;
}
int main() {
    ftc1();
    printf("Copyright (c) 2026 Chenpiyang All rights reserved. \n");
}