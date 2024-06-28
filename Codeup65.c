#include <stdio.h>

int main() {

	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);//입력
	
	if (a % 2 == 0)//if문을 사용해서 짝수 확인하기
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