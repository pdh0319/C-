#include <stdio.h>

int main() {
	char a;
	while (1) {//1로 무한루프
		scanf_s("%c ", &a);//입력
		printf("%c\n", a);//a 가 q가 아니니 출력
		if (a == 'q')//a가 q니 중단
			break;
	}
}