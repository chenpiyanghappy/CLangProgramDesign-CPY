#include <stdio.h>
#include <windows.h>

int munp() {
    SetConsoleOutputCP(65001);
    int a =1300;
    int b=14;
    printf("计算结果：%d \n",a+b);
    return 0;
}
int main() {
    munp();
    printf("Copyright (c) 2026 Chenpiyang All rights reserved. \n");
}