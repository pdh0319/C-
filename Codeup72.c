#include <stdio.h>

int main() {
    int a;
    scanf_s("%d", &a); // 입력

    for (int i = 0; i < a; ++i) {
        int m;
        scanf_s("%d", &m); // 정수 입력 받기
        printf("%d\n", m); // 정수 출력
    }
    return 0;
}
