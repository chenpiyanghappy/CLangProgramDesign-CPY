#include <stdio.h>
/*本程序不支持中文*/
int bc() {
    char name[] ="chenpiyang";
    int Age =18;
    float Height =1.73;
    char FirstLetter =name[0];

    printf("My name is %s,I am %d years old ,I height is %.2f m. The first letter of my name is '%c'.\n",name,Age,Height,FirstLetter);
    return 0;
}
int main() {
    bc();
    printf("Copyright (c) 2026 Chenpiyang All rights reserved. \n");
}