#include <math.h>
#include <stdio.h>
#include <windows.h> // Windows下设置控制台编码（Linux/macOS请移除有关代码）

// 清空输入缓冲区（直到遇到换行符或EOF）
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// 获取一个正数边长（带输入验证）
double get_positive_side(const char* prompt) {
    double value;
    int success;
    do {
        printf("%s", prompt);
        success = scanf("%lf", &value);
        if (success != 1) {
            printf("输入错误，请输入一个数字！\n");
            clear_input_buffer(); // 清理无效输入
        } else if (value <= 0) {
            printf("边长必须为正数，请重新输入！\n");
            // 输入虽然是数字但不符合要求，不需要清理缓冲区（因为scanf已经读取了数字）
        } else {
            break; // 输入正确
        }
    } while (1);
    return value;
}

int calculate_triangle_area() {
    SetConsoleOutputCP(65001); // 设置Windows控制台为UTF-8编码，支持中文（Linux/macOS请移除有关代码）

    printf("====================================\n");
    printf("三角形面积计算器 Triangle Area Calculator  (Copyright (c) 2026 chenpiyang All rights reserved. \n");
    printf("====================================\n\n");

    // 分别提示输入三条边
    double a = get_positive_side("请输入第一条边长: ");
    double b = get_positive_side("请输入第二条边长: ");
    double c = get_positive_side("请输入第三条边长: ");

    // 检查三角形不等式
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("错误：这三条边不能构成三角形！\n");
        return 1;
    }

    // 计算半周长和面积
    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("\n三角形的面积为: %.2f\n", area);
    return 0;
}

int main() {
    calculate_triangle_area();

    printf("\n按回车键退出...");
    clear_input_buffer(); // 清除之前可能的残留字符
    getchar(); // 等待用户按键
    return 0;
}
