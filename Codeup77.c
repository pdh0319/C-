#include <stdio.h>

int main() {
	int i, n;
	scanf_s("%d", &n);//입력
	for (i = 0; i <= n; i++)//for문으로 n이 될때까지 반복
	{
		printf("%d\n",i);//for문 반복만큼의 수 출력
	}
}