/*
* Chapter 11.
* 실습 예제 3. 로또 번호 생성 프로그램 - 정렬하지 않고 출력
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOTTO_LEN 6

void generate_lotto(int*);
int has_number(const int*, int);
void print_lotto(const int[]);

int main() {
	int lotto[LOTTO_LEN] = { 0 };

	srand((unsigned)time(NULL));

	generate_lotto(lotto);
	printf("로또 번호: ");
	print_lotto(lotto);

	return 0;
}

void generate_lotto(int *plotto) {
	int i = 0;
	while (i < LOTTO_LEN) {
		int num = rand() % 45 + 1;
		// 이미 생성한 로또 번호면 다시 생성
		if (has_number(plotto, num)) continue;
		plotto[i++] = num;
	}
}

int has_number(const int *plotto, int n) {
	int i;
	for (i = 0; i < LOTTO_LEN; i++) {
		// 이미 생성된 로또 번호가 있다면 1(true)를 리턴
		if (plotto[i] == n) return 1;
	}

	// n이 지금까지 생성되지 않은 로또 번호이면 0(false) 리턴
	return 0;
}

void print_lotto(const int lotto[]) {
	int i;
	for (i = 0; i < LOTTO_LEN; i++) printf("%3d", lotto[i]);
	printf("\n");
}