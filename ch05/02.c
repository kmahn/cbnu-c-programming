/*
* Chapter 5.
* 실습 예제 2. 윤년 판별 프로그램
*/
#include <stdio.h>

int main() {

	// 변수 선언
	int year, result;

	// 연도 입력
	printf("연도를 입력하시오: ");
	scanf("%d", &year);

	result = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

	printf("result = %d\n", result);

	return 0;
}
