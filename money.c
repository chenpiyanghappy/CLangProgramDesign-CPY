#include <stdio.h>

int money () {
    int money =100;
    money = money + 2;
    printf("%d \n",money);
    return 0;
}

int main() {
    money();
}