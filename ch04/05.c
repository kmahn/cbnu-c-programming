/*
* Chapter 4.
* 실습 예제 5. 아스키 코드 변환 프로그램
*/
#include <stdio.h>

int main() {
	// 변수 선언
	int code;

	// 코드값 입력
	printf("아스키 코드값을 입력하시오: ");
	scanf("%d", &code);

	// 아스크코드에 해당하는 문자 출력
	printf("문자 %c입니다.\n", code);

	return 0;
}