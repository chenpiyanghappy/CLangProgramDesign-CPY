#include <stdio.h>
int demo2() {
    int sum =0;
    int i =1;
    while (i<= 100) {
        sum = sum + i;
        i++;
    }
    printf("The sum is %d\n",sum);

    sum = 0;
    i =1;
    while (i<= 100) {
        if (i%2 == 0) {
            sum = sum + i;
        }
        i++;
    }
    printf("The sum is %d\n",sum);
    sum = 0;
    i =1;
    do {
        if (i % 2 == 0) {
            sum +=i;
        }
        i++;
    }
    while (i <= 100);
    printf("The sum is %d\n",sum);
    return 0;
}
int main() {
    demo2();
}