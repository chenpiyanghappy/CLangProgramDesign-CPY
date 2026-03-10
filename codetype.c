#include <stdio.h>
#include <windows.h>
int CodeType() {
    SetConsoleOutputCP(65001);
    printf("12 \n");
    printf("计算的结果是：%d\n",10+2);
    printf("输出字符%c \n",'a');
    printf("输出字符串%f \n",1.1);
    printf("八进制：%o \n",037);
    printf("十六进制%x \n",0x37);
    printf("输出多个常量%d,%d,%d \n",1,2,3);

    char ch='a';
    printf("计算符号常量：%c \n",ch);
    return 0;
}
int main() {
    CodeType();
    return 0;
}