#include <stdio.h>

int prime_num(int num) {
    int j;
    for (j = num - 1; j > 1; j--) {
        if (num % j == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("소수인지 확인하는 수를 입력하세요 : ");
    scanf_s("%d", &num);
    
    if (prime_num(num) == 1)
        printf("해당 수는 소수입니다.\n");
    else
        printf("해당 수는 소수가 아닙니다.\n");
}


