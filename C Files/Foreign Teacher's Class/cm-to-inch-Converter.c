#include <stdio.h>
#include <windows.h>
int cic() {
    SetConsoleOutputCP(65001);
    float inches, cm;

    printf("请输入长度（英寸）：");
    scanf("%f", &inches);

    cm = inches * 2.54;

    printf("%.2f 英寸 = %.2f 厘米\n", inches, cm);

    return 0;
}
int main () {
    cic();
    printf("Copyright (c) 2026 Chenpiyang All rights reserved. \n");
}