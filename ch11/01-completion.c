/*
* Chapter 11.
* �ǽ� ���� 1. ������ ����� y���� ���ϱ�
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
	int n;

	printf("������ ������ ���� �Է�: ");
	scanf("%d", &n);

	return n;
}

void generate(int list[], int size) {
	int i;
	for (i = 0; i < size; i++)
		// 1 ~ 10000������ ������ size ��ŭ �����Ͽ� �迭 list�� ����
		list[i] = rand() % 10000 + 1;
}

void print(const int list[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", list[i]);
}

void selection_sort(int list[], int size) {
	int least, i, j;
	for (i = 0; i < size - 1; i++) {
		least = i;
		for (j = i + 1; j < size; j++) {
			if (list[least] > list[j]) least = j;
		}
		swap(&list[i], &list[least]);
		// swap(list + i, list + least);
	}
}

void swap(int *x, int *y) {
	int t = *x;
	*x = *y;
	*y = t;
}