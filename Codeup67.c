#include <stdio.h>

int main() {
	int a;
	scanf_s("%d", &a);//�Է�

	if (a > 0) {//��ĵ���� ������ 0���� ū�� Ȯ��
		printf("plus\n");
	}
	else
		printf("minus\n");
	
	if (a % 2 == 0)//��ĵ���� ������ ¦������ Ȧ������ Ȯ��
	{
		printf("even\n");
	}
	else
		printf("odd\n");
}