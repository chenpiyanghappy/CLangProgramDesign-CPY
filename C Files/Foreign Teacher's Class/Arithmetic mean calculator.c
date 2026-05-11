#include <stdio.h>
#include <windows.h>

int amc() {
    SetConsoleOutputCP(65001);
    float a, b, c;
    // 读取三个浮点数
    printf("请输入三个浮点数，用空格或回车分隔：");
    scanf("%f %f %f", &a, &b, &c);

    // 计算平均值
    float average = (a + b + c) / 3.0f;

    // 输出结果，保留两位小数
    printf("算术平均值为：%.2f\n", average);

    return 0;
}
int main() {
    amc();
    printf("Copyright (c) 2026 Chenpiyang All rights reserved. \n");
}