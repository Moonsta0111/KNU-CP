#include <stdio.h>

int main(void)
{
    int input_num;

    printf("정수 입력: ");
    scanf_s("%d", &input_num);

    if (input_num > 0) {
        printf("양의 정수입니다. (%d)\n", input_num);
    }
    else if(input_num < 0)
    {
        printf("음의 정수입니다 (%d).\n", input_num);
    }
    else
    {
        printf("0 입니다. (%d)\n", input_num);
    }

    return 0;
}