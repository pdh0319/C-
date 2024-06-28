#include <stdio.h>//74번 문제와 동일

int main() {
	int n;
	scanf_s("%d", &n);
	while (n != 0)
	{
		n = n - 1; //n--; 와 같다.
		printf("%d\n", n);
	}
}