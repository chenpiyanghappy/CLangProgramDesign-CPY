#include <stdio.h>
#include <windows.h>

int calculator() {
    SetConsoleOutputCP(65001); // 设置UTF-8 编码，防止中文乱码

    double a, b;
    char op;

    printf("请输入算式 (例如：5 + 3)：\n");

    // 优化：在 %c 前后加空格，可以自动跳过输入时的空白字符
    // 这样用户输入 "5+3" 或者 "5 + 3" 都能正确识别
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        printf("错误：输入格式无效，请确保输入了数字和运算符。\n");
        return 1; // 返回非0 值表示出错
    }

    if (op == '+') {
        printf("结果：%.2lf\n", a + b);
    }
    else if (op == '-') {
        printf("结果：%.2lf\n", a - b);
    }
    else if (op == '*') {
        printf("结果：%.2lf\n", a * b);
    }
    else if (op == '/') {
        if (b == 0) {
            printf("错误：除数不能为0 (Division by zero)\n");
        }
        else {
            printf("结果：%.2lf\n", a / b);
        }
    }
    else {
        printf("错误：无效的运算符 (Invalid operation: %c)\n", op);
    }

    return 0;
}

int main() {
    calculator();
    printf("Copyright (c) 2026 Chenpiyang All rights reserved.\n");

    return 0;
}