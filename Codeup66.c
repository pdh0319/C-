#include <stdio.h>

int main() {
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);//�Է�
	
	if (a % 2 == 0)//if���� ����Ͽ� ¦�� Ȧ�� �����Ͽ� ����ϱ�
	{
		printf("even\n");
	}
	else
		printf("odd\n");

	if (b % 2 == 0)
	{
		printf("even\n");
	}
	else
		printf("odd\n");
	if (c % 2 == 0)
	{
		printf("even\n");
	}
	else
		printf("odd\n");
}