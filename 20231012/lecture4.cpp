#include <stdio.h>

int main()
{
    int score[5] = { 87,92,94,65,33 };
    int cnt;

    int* p_score = score;
    for (int i =0; i < 4; i++) {
        printf("%d\n", *p_score);
        p_score++;
    }
    
    return 0;
}