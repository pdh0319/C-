#include <stdio.h>

int main() {
	char a;
	while (1) {//1�� ���ѷ���
		scanf_s("%c ", &a);//�Է�
		printf("%c\n", a);//a �� q�� �ƴϴ� ���
		if (a == 'q')//a�� q�� �ߴ�
			break;
	}
}