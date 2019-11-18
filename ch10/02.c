/*
* Chapter 10.
* 실습 예제 2. 선택 정렬 프로그램
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100 // 배열의 최대 크기

int input();
void generate(int[], int);
void print(const int[], int);
void selection_sort(int[], int);

int main() {
	int n, numbers[MAX];

	// 난수 생성을 위한 시드값 초기화
	srand((unsigned)time(NULL));

	while ((n = input()) > 0) {

		// 100을 초과하는 수가 입력되면 다시 입력을 받도록 함
		if (n > MAX) {
			printf("100 이하의 수를 입력하세요.\n");
			continue;
		}

		// 난수를 n개 생성하여 배열 numbers에 저장
		generate(numbers, n);

		// (배열에 저장되어 있는) 생성된 숫자 출력
		printf("정렬하기 전:\n");
		print(numbers, n);

		// 생성된 n 개의 숫자 정렬
		selection_sort(numbers, n);
		// 정렬한 후 출력
		printf("정렬한 후:\n");
		print(numbers, n);
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

		// 원소 10개가 출력될 때마다 개행
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