#include <stdio.h>
int test() {
    int a=1,b=2;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d,%d",a,b);
    return 0;
}
int main() {
    test();
}