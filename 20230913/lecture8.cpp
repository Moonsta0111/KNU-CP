#include <stdio.h>

int main(void)
{
    int score;

    printf(" ������ �Է��Ͻÿ�. : ");
    scanf_s("%d", &score);



    if (score > 100 || score < 0) {
        printf("�߸� �Է��߽��ϴ�.");
        return 0;
    }

    score /= 10;
 
        switch (score) {
        case 10:
        case 9:
            printf("A �����Դϴ�.\n");
            break;
        case 8:
            printf("B �����Դϴ�.\n");
            break;
        case 7:
            printf("C �����Դϴ�.\n");
            break;
        case 6:
            printf("D �����Դϴ�.\n");
            break;
        default:
            printf("F �����Դϴ�.\n");
        }

    return 0;
}