#include <stdio.h>

int main(void)
{
    int score;

    printf(" 점수를 입력하시오. : ");
    scanf_s("%d", &score);



    if (score > 100 || score < 0) {
        printf("잘못 입력했습니다.");
        return 0;
    }

    score /= 10;
 
        switch (score) {
        case 10:
        case 9:
            printf("A 학점입니다.\n");
            break;
        case 8:
            printf("B 학점입니다.\n");
            break;
        case 7:
            printf("C 학점입니다.\n");
            break;
        case 6:
            printf("D 학점입니다.\n");
            break;
        default:
            printf("F 학점입니다.\n");
        }

    return 0;
}