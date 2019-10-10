/*
* Chapter 6.
* 실습 예제 2. 윤년 판별 프로그램
*/
#include <stdio.h>

int main() {

	// 변수 선언
	int year;

	// 연도 입력
	printf("연도를 입력하시오: ");
	scanf("%d", &year);

	printf("%d년은 윤년", year);

	// 윤년인지 아닌지 출력
	if (year % 400 == 0) {
		printf("입니다.");
	}
	else if (year % 100 == 0) {
		printf("이 아닙니다.");
	}
	else if (year % 4 == 0) {
		printf("입니다.");
	}
	else {
		printf("이 아닙니다.");
	}

	printf("\n");


	return 0;
}
