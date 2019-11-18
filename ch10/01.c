/*
 * Chapter 10.
 * 실습 예제 1. 주사위 카운팅 프로그램
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input(); // 입력용 메시지를 출력후 입력된 숫자 리턴
int roll();  // 주사위를 굴림(나온 숫자 리턴 0 ~ 5 -> 1 ~ 6)
void print_count(const int[]); // 나온 숫자별로 카운팅된 배열 출력

int main() {
	int i, n, count_face[6] = { 0 };

	srand((unsigned)time(NULL)); // 매 실행마다 다른 난수열 생성

	while ((n = input()) > 0) {
		for (i = 0; i < n; i++) {
			count_face[roll()]++;
		}
		print_count(count_face);
	}
	printf("프로그램 종료\n");

	return 0;
}

int input() {
	int n;
	printf("주사위 굴릴 횟수: ");
	scanf("%d", &n);
	return n;
}

int roll() {
	return rand() % 6;
}

void print_count(const int face[]) {
	for (int i = 0; i < 6; i++) {
		printf("%d: %d\n", i + 1, face[i]);
	}
}