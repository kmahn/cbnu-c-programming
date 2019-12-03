/*
* Chapter 12.
* 실습 예제 2. 단어 분리 프로그램 1
*/
#include <stdio.h>
#include <string.h>

#define BUF_SIZE 1024
#define DELEMETER "\" ,."

int main() {
	char buf[BUF_SIZE + 1] = { 0 };
	char *token;
	int cnt = 0;

	printf("문자열 입력: ");
	gets_s(buf, BUF_SIZE);

	printf("결과:\n");

	token = strtok(buf, DELEMETER);

	while (token) {
		cnt++;
		printf("Word %d: %s\n", cnt, token);
		token = strtok(NULL, DELEMETER);
	}

	printf("\nTotal %d words\n", cnt);

	return 0;
}