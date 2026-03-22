#include <stdio.h>
#include <windows.h>
int demo () {
    SetConsoleOutputCP(65001);
    int a=15;
    int b=41;
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf( "a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a/b=%d\n", a/b);//整数除法，结果为3
    printf("a%b= %d\n", a%b);//取模运算，结果为3
    return 0;
}
int main() {
    demo();
    printf("Copyright (c) 2026 Chenpiyang All rights reserved.");
}