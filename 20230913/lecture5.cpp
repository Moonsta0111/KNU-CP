#include <stdio.h>

int main(void)
{
    int year, a;

    printf(" 윤년인지 알고싶은 년도를 입력하시오. : ");
    scanf_s("%d", &year);

    a = (year % 100 != 0) && (year % 400 == 0) && (year % 4 == 0);

    if (a)
        printf("윤년입니다.\n");
    else
        printf("윤년이 아닙니다.\n");

    return 0;
}