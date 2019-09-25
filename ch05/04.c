/*
* Chapter 5.
* 실습 예제 4. 2진수 변환 프로그램
*/
#include <stdio.h>

int main() {

	// 변수 선언
	unsigned digit, mask = 1 << 7;

	// 입력부
	printf("10 진수 입력: ");
	scanf("%d", &digit);

	// 2진수 출력부
	printf("2 진수: ", digit);
	(digit & mask) == 0 ? printf("0") : printf("1");
	mask >>= 1;
	(digit & mask) == 0 ? printf("0") : printf("1");
	mask >>= 1;
	(digit & mask) == 0 ? printf("0") : printf("1");
	mask >>= 1;
	(digit & mask) == 0 ? printf("0") : printf("1");
	mask >>= 1;
	(digit & mask) == 0 ? printf("0") : printf("1");
	mask >>= 1;
	(digit & mask) == 0 ? printf("0") : printf("1");
	mask >>= 1;
	(digit & mask) == 0 ? printf("0") : printf("1");
	mask >>= 1;
	(digit & mask) == 0 ? printf("0") : printf("1");
	printf("\n");

	return 0;
}