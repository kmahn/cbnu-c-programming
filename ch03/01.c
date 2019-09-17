/*
 * Chapter 3.
 * 실습 예제 1. 덧셈 프로그램
*/
#include <stdio.h>

int main() {

	// 변수 선언
	int x;
	int y;
	int sum;

	// 입력 부분
	printf("첫 번째 숫자를 입력하시오: ");
	scanf("%d", &x);
	printf("두 번째 숫자를 입력하시오: ");
	scanf("%d", &y);

	// 합을 계산하고 출력하는 부분
	sum = x + y;
	printf("두 수의 합: %d\n", sum);

	return 0;
}