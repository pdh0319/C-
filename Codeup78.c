#include <stdio.h>

int main() {
	int sum = 0;
	int i, n;
	scanf_s("%d", &n);//입력
	for (i = 1; i <= n; i++)//for 문으로 받은 수의 수만큼의 정수 갯수
	{
		if (i % 2 == 0) sum = sum + i;//그중에서 짝수만 거르기
	}
	printf("%d", sum);//짝수만 더해서 출력
}