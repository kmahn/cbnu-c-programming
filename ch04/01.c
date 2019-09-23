/*
 * Chapter 4.
 * 실습 예제 1. 자료형의 크기 구하기
*/
#include <stdio.h>

int main() {

	printf("char의 크기는 %d 입니다.\n", sizeof(char));
	printf("short의 크기는 %d 입니다.\n", sizeof(short));
	printf("int의 크기는 %d 입니다.\n", sizeof(int));
	printf("long의 크기는 %d 입니다.\n", sizeof(long));
	printf("long long의 크기는 %d 입니다.\n", sizeof(long long));
	printf("float의 크기는 %d 입니다.\n", sizeof(float));
	printf("double의 크기는 %d 입니다.\n", sizeof(double));
	printf("long double의 크기는 %d 입니다.\n", sizeof(long double));

	return 0;
}