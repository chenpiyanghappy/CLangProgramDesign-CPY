#define PI 3.14159
#include <stdio.h>
#include <windows.h>
int  main() {
    SetConsoleOutputCP(65001);
    float r,area;
    printf("请输入圆的半径：\n");
    scanf("%f",&r);
    area=PI*r*r;
    printf("圆的面积是：%f \n",area);
    return 0;
}