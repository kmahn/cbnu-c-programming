/*
* Chapter 11.
* �ǽ� ���� 3. �ζ� ��ȣ ���� ���α׷� - �������� �ʰ� ���
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
	printf("�ζ� ��ȣ: ");
	print_lotto(lotto);

	return 0;
}

void generate_lotto(int *plotto) {
	int i = 0;
	while (i < LOTTO_LEN) {
		int num = rand() % 45 + 1;
		// �̹� ������ �ζ� ��ȣ�� �ٽ� ����
		if (has_number(plotto, num)) continue;
		plotto[i++] = num;
	}
}

int has_number(const int *plotto, int n) {
	int i;
	for (i = 0; i < LOTTO_LEN; i++) {
		// �̹� ������ �ζ� ��ȣ�� �ִٸ� 1(true)�� ����
		if (plotto[i] == n) return 1;
	}

	// n�� ���ݱ��� �������� ���� �ζ� ��ȣ�̸� 0(false) ����
	return 0;
}

void print_lotto(const int lotto[]) {
	int i;
	for (i = 0; i < LOTTO_LEN; i++) printf("%3d", lotto[i]);
	printf("\n");
}