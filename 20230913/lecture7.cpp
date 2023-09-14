#include <stdio.h>

int main()
{
    int score;

    printf(" 점수를 입력하시오. : ");
    scanf_s("%d", &score);

    if (score > 100 || score < 0)
        printf("잘못입력했습니다.");

    else if (score >= 90)
        printf("A 학점입니다.\n");
    else if (score >= 80)
        printf("B 학점입니다.\n");
    else if (score >= 70)
        printf("C 학점입니다.\n");
    else if (score >= 60)
        printf("D 학점입니다.\n");
    else
        printf("F 학점입니다.\n");

    return 0;
}