#include <stdio.h>

int main() {
    char a;
    scanf_s("%c", &a);//입력

    char current = 'a';

    do {//챗 gpt의 도움을 받음
        printf("%c ", current);
        current++;
    } while (current <= a);

    printf("\n");

    return 0;
}
