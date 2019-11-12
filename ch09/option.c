/*
* Chapter 9.
* 실습 예제 2. 외부 연결 실습(option.c)
*/
#include <stdio.h>

// 외부 연결을 갖는 전역 변수
const int OPTION1 = 0x1;
const int OPTION2 = 0x2;

// 내부 연결을 갖는 전역 변수
static int option = 0x00;

void print_option() {
	// 옵션1 설정 여부 출력
	if (option & OPTION1) printf("옵션1 설정\n");
	else printf("옵션1 해제\n");

	// 옵션2 설정 여부 출력
	if (option & OPTION2) printf("옵션2 설정\n");
	else printf("옵션2 해제\n");
}

void add_option(int opt) {
	// 해당 옵션의 비트 추가
	option |= opt;
}

void remove_option(int opt) {
	// 해당 옵션의 비트 제거
	option &= ~opt;
}

