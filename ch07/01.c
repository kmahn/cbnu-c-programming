/*
 * Chapter 7.
 * 실습 예제 1. 구구단 프로그램
*/
#include <stdio.h>

int main() {

	int n, i;

	printf("2 ~ 9 사이의 수 입력: ");
	scanf("%d", &n);

	if (n < 2 || n > 9) {
		printf("잘못된 입력입니다.\n");
		return 0;
	}

	for (i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", n, i, n * i);

	return 0;
}
