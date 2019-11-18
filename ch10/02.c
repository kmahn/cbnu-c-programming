/*
* Chapter 10.
* �ǽ� ���� 2. ���� ���� ���α׷�
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100 // �迭�� �ִ� ũ��

int input();
void generate(int[], int);
void print(const int[], int);
void selection_sort(int[], int);

int main() {
	int n, numbers[MAX];

	// ���� ������ ���� �õ尪 �ʱ�ȭ
	srand((unsigned)time(NULL));

	while ((n = input()) > 0) {

		// 100�� �ʰ��ϴ� ���� �ԷµǸ� �ٽ� �Է��� �޵��� ��
		if (n > MAX) {
			printf("100 ������ ���� �Է��ϼ���.\n");
			continue;
		}

		// ������ n�� �����Ͽ� �迭 numbers�� ����
		generate(numbers, n);

		// (�迭�� ����Ǿ� �ִ�) ������ ���� ���
		printf("�����ϱ� ��:\n");
		print(numbers, n);

		// ������ n ���� ���� ����
		selection_sort(numbers, n);
		// ������ �� ���
		printf("������ ��:\n");
		print(numbers, n);
	}

	printf("���α׷� ����\n");

	return 0;
}

int input() {
	int n;
	printf("������ ������ ���� �Է�: ");
	scanf("%d", &n);
	return n;
}

void generate(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		arr[i] = rand() % 10000 + 1;
	}
}

void print(const int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%6d", arr[i]);

		// ���� 10���� ��µ� ������ ����
		if ((i + 1) % 10 == 0) printf("\n");
	}
	printf("\n");
}

void selection_sort(int arr[], int size) {
	int min_index, i, j, tmp;
	for (i = 0; i < size - 1; i++) {
		min_index = i;
		for (j = i + 1; j < size; j++) {
			if (arr[min_index] > arr[j]) min_index = j;
		}
		tmp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = tmp;
	}
}