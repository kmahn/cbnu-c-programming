/*
* Chapter 10.
* �ǽ� ���� 3. Ž�� ���α׷�
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100 // ������ ������ �ִ밪

// ���� ���� ����
int numbers[MAX];
int size;

// �Լ� ���� ����
int input();
void generate();
void selection_sort();
void print();
int binary_search(int);

int main() {
	int key;
	// ���� ���� �õ� �� �ʱ�ȭ
	srand((unsigned)time(NULL));

	while (input() > 0) {
		if (size > MAX) {
			printf("100 ������ ���� �Է��ϼ���.\n");
			continue;
		}

		// size ��ŭ�� ������ �����Ͽ� �迭 numbers�� �����ϰ�
		generate();
		// ���� ���� ��
		selection_sort();
		// �迭 ���
		print();

		// ã���� �ϴ� ���� ���� Ž������ ã��
		printf("ã���� �ϴ� �� �Է�: ");
		scanf("%d", &key);
		if (binary_search(key) != -1) {
			printf("�ֽ��ϴ�.\n");
		}
		else {
			printf("�����ϴ�.\n");
		}
	}

	printf("���α׷� ����\n");

	return 0;
}

int input() {
	printf("������ ������ ���� �Է�: ");
	scanf("%d", &size);
	return size;
}

void generate() {
	int i;
	for (i = 0; i < size; i++) {
		// 1 ~ 100 ������ ���� ����
		numbers[i] = rand() % 100 + 1;
	}
}

void selection_sort() {
	// ���� ���� ����
	int min_index, i, j, tmp;
	for (i = 0; i < size - 1; i++) {
		min_index = i;
		for (j = i + 1; j < size; j++) {
			if (numbers[min_index] > numbers[j]) min_index = j;
		}
		tmp = numbers[i];
		numbers[i] = numbers[min_index];
		numbers[min_index] = tmp;
	}
}

void print() {
	int i;
	for (i = 0; i < size; i++) {
		printf("%4d", numbers[i]);
		if ((i + 1) % 10 == 0) printf("\n");
	}
	printf("\n");
}

int binary_search(int key) {
	// ���� Ž�� ����
	int low = 0, high = size - 1, middle;

	while (low <= high) {
		middle = (low + high) / 2;
		if (numbers[middle] == key) return middle;
		else if (key < numbers[middle]) high = middle - 1;
		else low = middle + 1;
	}

	return -1;
}