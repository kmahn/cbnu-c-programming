/*
* Chapter 4.
* 실습 예제 2. 8진수, 10진수, 16진수 프로그램
*/
#include <stdio.h>

int main() {

	// 변수 선언
	int number;

	// 16진수 입력
	printf("16진수 정수를 입력하시오: ");
	scanf("%x", &number);

	// 출력
	printf("8진수로는 %o입니다.\n", number);
	printf("10진수로는 %d입니다.\n", number);
	printf("16진수로는 %x입니다.\n", number);

	return 0;
}