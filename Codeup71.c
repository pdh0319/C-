#include <stdio.h>

int main() {
	int a;

	while (1) {//1�� ���� ����
		scanf_s("%d", &a);//�Է�
		if (a != 0) {//a �� 0�� �ƴϸ� a ���
			printf("%d\n", a);
		}
		else//a�� 0�̸� �ߴ�
			break;
	}
}