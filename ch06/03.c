/*
* Chapter 6.
* 실습 예제 3. 문자 분류 프로그램
*/
#include <stdio.h>

int main() {

	// 변수 선언
	char c;

	// 입력부
	printf("문자를 입력하시오: ");
	scanf("%c", &c);

	printf("%c는 ", c);

	// 문자 종류 출력
	if ('a' <= c && c <= 'z') {
		printf("소문자");
	}
	else if ('A' <= c && c <= 'Z') {
		printf("대문자");
	}
	else if ('0' <= c && c <= '9') {
		printf("숫자");
	}
	else {
		printf("기타문자");
	}

	printf("입니다.\n");

	return 0;
}