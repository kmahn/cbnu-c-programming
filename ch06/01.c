/*
 * Chapter 6.
 * 실습 예제 1. 홀수/짝수 판별 프로그램
*/
#include <stdio.h>

int main() {

	// 변수 선언
	int n;

	// 입력부
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	printf("입력된 정수는 ");

	// 홀수, 짝수 출력부
	// 결과가 1(홀수)이 나오면 참으로 판별되기 때문
	if (n % 2) {
		printf("홀수");
	}
	else {
		printf("짝수");
	}
	printf("입니다.\n");

	return 0;
}
