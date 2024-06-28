#include <stdio.h>

int main() {
    char a;

    scanf_s("%c", &a, 1);//문자 입력

    if (a == 'A') {//문자 보고 출력
        printf("best!!!");
    }
    else if (a == 'B') {
        printf("good!!");
    }
    else if (a == 'C') {
        printf("run!");
    }
    else if (a == 'D') {
        printf("slowly~");
    }
    else
        printf("what?");

    return 0;
}
