/*
* Chapter 12.
* 실습 예제 3. 단어 분리 프로그램 2
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define BUF_SIZE 1024
#define MAX_WORD_SIZE 100
#define MAX_NUM 2000
#define DELEMETER "\" ,."

char words[MAX_NUM][MAX_WORD_SIZE];
int num_of_words = 0;

void tolower_word(char *word);
int find_word(const char *word);
void print_words();

int main() {
	char buf[BUF_SIZE + 1] = { 0 };
	char *token;

	printf("문자열 입력: ");
	gets_s(buf, BUF_SIZE);

	printf("결과:\n");

	token = strtok(buf, DELEMETER);

	while (token) {
		tolower_word(token);
		if (find_word(token) == -1) {
			strcpy(words[num_of_words++], token);
		}
		token = strtok(NULL, DELEMETER);
	}

	print_words();
	printf("\nTotal %d words\n", num_of_words);

	return 0;
}

void tolower_word(char *word) {
	int i = 0;
	for (i = 0; word[i]; i++)
		word[i] = tolower(word[i]);
}

int find_word(const char *word) {
	int i;
	for (i = 0; i < num_of_words; i++) {
		if (strcmp(words[i], word) == 0) return i;
	}
	return -1;
}

void print_words() {
	int i;
	for (i = 0; i < num_of_words; i++)
		printf("Word %d: %s\n", i + 1, words[i]);
}