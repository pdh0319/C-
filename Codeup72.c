#include <stdio.h>

int main() {
    int a;
    scanf_s("%d", &a); // �Է�

    for (int i = 0; i < a; ++i) {
        int m;
        scanf_s("%d", &m); // ���� �Է� �ޱ�
        printf("%d\n", m); // ���� ���
    }
    return 0;
}
