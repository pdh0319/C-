#include <stdio.h>

int main() {
    int a;

    scanf_s("%d", &a);//입력
    if (a >= 90 && a <= 100) {//if문으로 점수 확인
        printf("A");
    }
    else if (a >= 70 && a <= 89) {
        printf("B");
    }
    else if (a >= 40 && a <= 69) {
        printf("C");
    }
    else if (a >= 0 && a <= 39) {
        printf("D");
    }

    return 0;
}
