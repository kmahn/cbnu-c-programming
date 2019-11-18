/*
 * Chapter 10.
 * �ǽ� ���� 1. �ֻ��� ī���� ���α׷�
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input(); // �Է¿� �޽����� ����� �Էµ� ���� ����
int roll();  // �ֻ����� ����(���� ���� ���� 0 ~ 5 -> 1 ~ 6)
void print_count(const int[]); // ���� ���ں��� ī���õ� �迭 ���

int main() {
	int i, n, count_face[6] = { 0 };

	srand((unsigned)time(NULL)); // �� ���ึ�� �ٸ� ������ ����

	while ((n = input()) > 0) {
		for (i = 0; i < n; i++) {
			count_face[roll()]++;
		}
		print_count(count_face);
	}
	printf("���α׷� ����\n");

	return 0;
}

int input() {
	int n;
	printf("�ֻ��� ���� Ƚ��: ");
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