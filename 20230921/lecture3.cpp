#include <stdio.h>

int fac(int num) {
    int result;
    
    if (num == 1) {
        return 1;
    }
    result = num * fac(num - 1);

    return result;
}
int main() {

    int num;

    printf("����� ���丮�� �� �Է� : ");
    scanf_s("%d", &num);

    printf("%d! = %d", num,fac(num));

    return 0;
}