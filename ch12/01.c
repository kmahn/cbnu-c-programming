/*
* Chapter 12.
* 실습 예제 1. 대소문자 치환 프로그램
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define BUF_SIZE 1024

int input(char *buf, int buf_size);

int main() {
	char buf[BUF_SIZE + 1] = { 0 };
	int i;

	while (input(buf, BUF_SIZE)) {
		for (i = 0; buf[i]; i++) {
			if (isupper(buf[i])) buf[i] = tolower(buf[i]);
			else if (islower(buf[i])) buf[i] = toupper(buf[i]);
		}
		printf("결과: %s\n", buf);
	}

	printf("프로그램 종료\n");
	return 0;
}

int input(char *buf, int buf_size) {
	printf("문자열 입력: ");
	gets_s(buf, buf_size);
	return strlen(buf);
}