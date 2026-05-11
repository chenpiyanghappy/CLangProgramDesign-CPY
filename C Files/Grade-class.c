#include <stdio.h>
#include <windows.h>

int cs1() {
    SetConsoleOutputCP(65001);
    int score;
    char grade;

    printf("请输入成绩（0-100）：");
    scanf("%d", &score);

    // 检查输入是否有效
    if (score < 0 || score > 100) {
        printf("成绩无效，请输入 0 到 100 之间的整数。\n");
        return 1;
    }

    // 根据分数评定等级
    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'E';

    printf("成绩等级：%c\n", grade);
    return 0;
}
int main() {
    cs1();
}