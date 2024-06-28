#include <stdio.h>

int main() {
	int a;

	while (1) {//1로 무한 루프
		scanf_s("%d", &a);//입력
		if (a != 0) {//a 가 0이 아니면 a 출력
			printf("%d\n", a);
		}
		else//a가 0이면 중단
			break;
	}
}