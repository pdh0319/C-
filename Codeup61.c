#include <stdio.h>

int main() {
    int a, b, c;


    scanf_s("%d %d", &a, &b);//입략
    c = a | b;//비트연산자

    printf("%d", c);//출력

    return 0;
}
