/*
* Chapter 7.
* 실습 예제 2. 삼각형 출력 프로그램(ver. 1)
*/
#include <stdio.h>

int main() {

	// 변수 선언
	int n, i, j;

	// 입력부
	printf("높이 입력: ");
	scanf("%d", &n);

	if (n < 1) {
		printf("잘못된 입력입니다.\n");
		return 0;
	}

	for (i = 1; i <= n; i++) {
		// * 출력
		for (j = 1; j <= i; j++)
			printf("*");
		// 다음 라인으로
		printf("\n");
	}


	return 0;
}
