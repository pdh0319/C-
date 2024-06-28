#include <stdio.h>

int main() {
	int a, b;//변수
	
	scanf_s("%d %d", &a, &b);//입력
	
	if (a > b) {//if문으로 a,b 크기 비교하기
		printf("%d", a);
	}
	else if (b > a) {
		printf("%d", b);
	}
	return 0;
}