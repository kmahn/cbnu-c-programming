/*
* Chapter 12.
* �ǽ� ���� 1. ��ҹ��� ġȯ ���α׷�
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
		printf("���: %s\n", buf);
	}

	printf("���α׷� ����\n");
	return 0;
}

int input(char *buf, int buf_size) {
	printf("���ڿ� �Է�: ");
	gets_s(buf, buf_size);
	return strlen(buf);
}