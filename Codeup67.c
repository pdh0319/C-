#include <stdio.h>

int main() {
	int a;
	scanf_s("%d", &a);//입력

	if (a > 0) {//스캔받은 정수가 0보다 큰지 확인
		printf("plus\n");
	}
	else
		printf("minus\n");
	
	if (a % 2 == 0)//스캔받은 정수가 짝수인지 홀수인지 확인
	{
		printf("even\n");
	}
	else
		printf("odd\n");
}