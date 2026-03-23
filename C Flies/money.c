#include <stdio.h>
#include <windows.h>

int money () {
    SetConsoleOutputCP(65001);
    int money =10000;
    money = money + 2;
    printf("金额为：%d \n",money);
    printf("Copyright (c) 2026 Chenpiyang All rights reserved. \n");
    return 0;
}

int main() {
    money();
}