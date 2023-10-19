#include <stdio.h>
#include <stdlib.h>

struct Studens {
    int sno;
    char name[10];
    int score;
};
int main(void)
{
    struct Studens* s;
    int num_student;
    int sum;
    sum = 0;
    printf("학생수 입력 : ");
    scanf_s("%d", &num_student);
    
    s = (struct Studens*)malloc(num_student * sizeof(struct Studens));

    for (int i = 0; i < num_student; i++) {
        printf("학생 # %d-%d 학번 입력 : ", num_student, (i + 1));
        scanf_s("%d", &(s[i].sno));
        printf("학생 # %d-%d 이름 입력 : ", num_student, (i + 1));
        scanf_s("%s", &(s[i].name), 10);
        printf("학생 # %d-%d 성적 입력 : ", num_student, (i + 1));
        scanf_s("%d", &(s[i].score));
        sum += s[i].score;
    }
    printf("총점 : %d\n", sum);

    for (int i = 0; i < num_student; i++) {
        printf("학생 # %d-%d 성적 출력 : %d\n", num_student,(i + 1), (s[i].score));
    }

    printf("평균 점수 : %.2f", ((float)sum / num_student));

    free(s);
    return 0;
}