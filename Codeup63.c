#include <stdio.h>

int main() {
	int a, b;//����
	
	scanf_s("%d %d", &a, &b);//�Է�
	
	if (a > b) {//if������ a,b ũ�� ���ϱ�
		printf("%d", a);
	}
	else if (b > a) {
		printf("%d", b);
	}
	return 0;
}