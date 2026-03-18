#include <stdio.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS
int test() {
    SetConsoleOutputCP(65001);
    int a = 15;
    int b = 4;

    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);  // 整数除法，结果为 3
    printf("a %% b = %d\n", a % b); // 取模运算，结果为 3

    return 0;
}
int main() {
    test();
}