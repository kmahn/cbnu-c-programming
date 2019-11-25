/*
* Chapter 11.
* 실습 예제 1. 직선의 기울기와 y절편 구하기
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100

int input();                     // 키보드로부터 입력 메시지를 출력하고 입력 받은 정수 리턴
void generate(int[], int);       // 배열에 N개 만큼의 난수를 생성하여 초기화, 난수는 1 ~ 10000 사이
void print(const int[], int);    // 배열의 원소를 N개 만큼 출력
void selection_sort(int[], int); // 배열의 원소 N개를 선택 정렬
void swap(int*, int*);           // 두 수를 교환


int main() {
	int n, list[MAX_SIZE];
	
	srand((unsigned)time(NULL));
	
	while ((n = input()) > 0) {
		if (n > MAX_SIZE) {
			printf("100 이하의 수를 입력하세요.\n");
			continue;
		}

		generate(list, n);
		printf("정렬하기 전: ");
		print(list, n);
		selection_sort(list, n);
		printf("\n정렬한 후: ");
		print(list, n);
		printf("\n");
	}
	printf("프로그램 종료\n");

	return 0;
}

int input() {
	int n;

	printf("생성할 숫자의 갯수 입력: ");
	scanf("%d", &n);

	return n;
}

void generate(int list[], int size) {
	int i;
	for (i = 0; i < size; i++)
		// 1 ~ 10000사이의 난수를 size 만큼 생성하여 배열 list에 저장
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