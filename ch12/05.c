/*
* Chapter 12.
* 실습 예제 5. 단어 카운팅 프로그램
*/
#include <stdio.h>
#include <string.h>
#define BUF_SIZE 100

int count_str(const char *txt, const char *str);
int input(char *str, int buf_size);

int main() {
	char *text = "C was originally developed at Bell Labs by Dennis Ritchie between 1972 and 1973 to make utilities runing on Unix. Later, it was applied to reimplementing the kernel of the Unix operating system. During the 1980s, C gradually gained popularity. Nowadays, it is one of the most widely used programming language, with C compilers from various vendors available for the majority of existing computer architectures and operating systems. C has been standardized by the American National Standards Institute since 1989 (see ANSI C) and subsequently by the International Organization for Standardization.";

	char str[BUF_SIZE + 1];
	printf("원문: %s\n", text);
	while (input(str, BUF_SIZE)) {
		printf("%s는 %d개가 있습니다.\n", str, count_str(text, str));
	}
	printf("프로그램 종료\n");
	return 0;
}

int count_str(const char *txt, const char *str) {
	int cnt = 0;
	char *tmp = strstr(txt, str);
	while (tmp) {
		cnt++;
		if (strlen(tmp) < strlen(str)) break;
		tmp = strstr(tmp + strlen(str), str);
	}
	return cnt;
}

int input(char *str, int buf_size) {
	gets_s(str, buf_size);
	return strlen(str);
}