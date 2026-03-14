#include <stdio.h>
int test() {
    printf("TEST USE ONLY");
    printf("copyright (c) 2026 chenpiyang All rights reserved.");
    char a,b,c;
    a=getchar();
    b=getchar();
    c=getchar();
    putchar(a);
    putchar(b);
    putchar(c);
    return 0;
}
int main() {
    test();
}