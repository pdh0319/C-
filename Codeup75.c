#include <stdio.h>//74�� ������ ����

int main() {
	int n;
	scanf_s("%d", &n);
	while (n != 0)
	{
		n = n - 1; //n--; �� ����.
		printf("%d\n", n);
	}
}