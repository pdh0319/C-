#include <stdio.h>

int main() {
    char a;
    scanf_s("%c", &a);//�Է�

    char current = 'a';

    do {//ê gpt�� ������ ����
        printf("%c ", current);
        current++;
    } while (current <= a);

    printf("\n");

    return 0;
}
