/*
 * Chapter 11.
 * �ǽ� ���� 1. swap �Լ��� �̿��� ���� ���� ���α׷� - ���α׷� ����
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100

int input();                     // Ű����κ��� �Է� �޽����� ����ϰ� �Է� ���� ���� ����
void generate(int[], int);       // �迭�� N�� ��ŭ�� ������ �����Ͽ� �ʱ�ȭ, ������ 1 ~ 10000 ����
void print(const int[], int);    // �迭�� ���Ҹ� N�� ��ŭ ���
void selection_sort(int[], int); // �迭�� ���� N���� ���� ����
void swap(int*, int*);           // �� ���� ��ȯ


int main() {
	int n, list[MAX_SIZE];

	srand((unsigned)time(NULL));

	while ((n = input()) > 0) {
		if (n > MAX_SIZE) {
			printf("100 ������ ���� �Է��ϼ���.\n");
			continue;
		}

		generate(list, n);
		printf("�����ϱ� ��: ");
		print(list, n);
		selection_sort(list, n);
		printf("\n������ ��: ");
		print(list, n);
		printf("\n");
	}
	printf("���α׷� ����\n");

	return 0;
}

int input() {
	// ���⿡ ����(���ϰ��� �����ؾ� ��)
	return 0;
}

void generate(int list[], int size) {
	// ���⿡ ����
}

void print(const int list[], int size) {
	// ���⿡ ����
}

void selection_sort(int list[], int size) {
	// ���⿡ ����
}

void swap(int *x, int *y) {
	// ���⿡ ����
}