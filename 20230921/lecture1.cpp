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
    printf("�Ҽ����� Ȯ���ϴ� ���� �Է��ϼ��� : ");
    scanf_s("%d", &num);
    
    if (prime_num(num) == 1)
        printf("�ش� ���� �Ҽ��Դϴ�.\n");
    else
        printf("�ش� ���� �Ҽ��� �ƴմϴ�.\n");
}


