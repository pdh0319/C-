#include <stdio.h>

int main() {
	int sum = 0;
	int i, n;
	scanf_s("%d", &n);//�Է�
	for (i = 1; i <= n; i++)//for ������ ���� ���� ����ŭ�� ���� ����
	{
		if (i % 2 == 0) sum = sum + i;//���߿��� ¦���� �Ÿ���
	}
	printf("%d", sum);//¦���� ���ؼ� ���
}