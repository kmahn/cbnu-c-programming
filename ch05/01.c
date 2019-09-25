/*
 * Chapter 5.
 * 실습 예제 1. 작은 수/큰 수 판별 프로그램
*/
#include <stdio.h>

int main() {

	int n1, n2, max, min;

	printf("두 수를 연속해서 입력하시오: ");
	scanf("%d %d", &n1, &n2);

	min = n1 < n2 ? n1 : n2;
	max = n1 > n2 ? n1 : n2;

	printf("작은 수: %d\n", min);
	printf("큰 수: %d\n", max);

	return 0;
}
