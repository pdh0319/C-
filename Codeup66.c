#include <stdio.h>

int main() {
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);//입력
	
	if (a % 2 == 0)//if문을 사용하여 짝수 홀수 구분하여 출력하기
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