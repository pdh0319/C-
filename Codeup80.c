#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int cnt = 0;

    scanf_s("%d", &n);//입력

    while (1) {
        cnt++;//cnt를 1부터 더한다
        sum += cnt; //sum에 cnt를 더한다

        if (sum >= n)//합이 n보다 크면 종료
            break;
    }
    printf("%d\n", cnt);//얼마나 했는지 출력
}
