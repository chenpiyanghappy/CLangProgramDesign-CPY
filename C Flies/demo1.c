#include <stdio.h>
#include <windows.h>

void demo1() {
    SetConsoleOutputCP(65001); // 设置UTF-8编码，防止中文乱码

    int num1, num2, max;

    // 第一次输入
    printf("请输入第一个整数：");
    scanf("%d", &num1);

    // 第二次输入
    printf("请输入第二个整数：");
    scanf("%d", &num2);

    // 计算最大值
    max = num1;
    if (max < num2) {
        max = num2;
    }

    // 输出结果
    printf("这两个数中较大的数是：%d\n", max);
}

int main() {
    demo1();
    printf("This is a C Console Demo Program \n ");
    printf("Copyright (c) 2026 Chenpiyang All rights reserved.\n");

    return 0;
}