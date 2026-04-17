#include <stdio.h>
#include <windows.h>
int ftc5() {
    SetConsoleOutputCP(65001);
    float celsius, fahrenheit;

    printf("请输入摄氏度：");
    scanf("%f", &celsius);

    // 使用浮点数计算，9.0/5.0 得到 1.8
    fahrenheit = celsius * (9.0 / 5.0) + 32;

    printf("%.2f 摄氏度 = %.2f 华氏度\n", celsius, fahrenheit);

    return 0;
}
int main() {
    ftc5();
    printf("Copyright (c) 2026 Chenpiyang All rights reserved. \n");
}