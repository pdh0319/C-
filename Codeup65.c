#include <stdio.h>

int main() {

	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);//�Է�
	
	if (a % 2 == 0)//if���� ����ؼ� ¦�� Ȯ���ϱ�
	{
		printf("%d\n", a);
	}

	if (b % 2 == 0)
	{
		printf("%d\n", b);
	}

	if (c % 2 == 0)
	{
		printf("%d\n", c);
	}
}