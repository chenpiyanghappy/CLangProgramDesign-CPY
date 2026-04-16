#include <stdio.h>
#include <windows.h>
int rac() {
    SetConsoleOutputCP(65001);
    int length, width, area;
    // 提示用户输入长和宽
    printf("请输入矩形的长（整数）：");
    scanf("%d", &length);
    printf("请输入矩形的宽（整数）：");
    scanf("%d", &width);

    // 计算面积
    area = length * width;

    // 输出结果
    printf("矩形的面积为：%d\n", area);

    return 0;
}
int main () {
    rac();
}
