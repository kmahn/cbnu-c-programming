/*
* Chapter 12.
* �ǽ� ���� 2. �ܾ� �и� ���α׷� 1
*/
#include <stdio.h>
#include <string.h>

#define BUF_SIZE 1024
#define DELEMETER "\" ,."

int main() {
	char buf[BUF_SIZE + 1] = { 0 };
	char *token;
	int cnt = 0;

	printf("���ڿ� �Է�: ");
	gets_s(buf, BUF_SIZE);

	printf("���:\n");

	token = strtok(buf, DELEMETER);

	while (token) {
		cnt++;
		printf("Word %d: %s\n", cnt, token);
		token = strtok(NULL, DELEMETER);
	}

	printf("\nTotal %d words\n", cnt);

	return 0;
}