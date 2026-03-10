#include <stdio.h>

int money () {
    int money =10000;
    money = money + 2;
    printf("%d \n",money);
    return 0;
}

int main() {
    money();
}