#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);
	while (n != 0)
	{
		printf("%d\n", n);
		n = n - 1; //n--;�� ����.
	}
}