#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int cnt = 0;

    scanf_s("%d", &n);//�Է�

    while (1) {
        cnt++;//cnt�� 1���� ���Ѵ�
        sum += cnt; //sum�� cnt�� ���Ѵ�

        if (sum >= n)//���� n���� ũ�� ����
            break;
    }
    printf("%d\n", cnt);//�󸶳� �ߴ��� ���
}
