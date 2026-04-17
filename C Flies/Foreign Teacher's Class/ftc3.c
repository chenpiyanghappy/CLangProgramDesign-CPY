#include <stdio.h>
#include <windows.h>
int ftc3() {
    SetConsoleOutputCP(65001);
    int arr[10];
    int sum = 0;
    int max, min;

    // 输入数据并填充数组
    printf("请输入10个整数：\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // 输出所有元素在一行
    printf("数组元素：");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 初始化最大值和最小值为第一个元素
    max = arr[0];
    min = arr[0];

    // 计算和、最大值、最小值
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // 计算平均值（浮点类型）
    float average = (float)sum / 10;

    // 输出结果
    printf("所有元素的和：%d\n", sum);
    printf("算术平均值：%.2f\n", average);
    printf("最大元素：%d\n", max);
    printf("最小元素：%d\n", min);

    return 0;
}
int main() {
    ftc3();
    printf("Copyright (c) 2026 Chenpiyang All rights reserved. \n");
}