/*
* Chapter 10.
* 실습 예제 3. 탐색 프로그램
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100 // 생성할 숫자의 최대값

// 전역 변수 선언
int numbers[MAX];
int size;

// 함수 원형 선언
int input();
void generate();
void selection_sort();
void print();
int binary_search(int);

int main() {
	int key;
	// 난수 생성 시드 값 초기화
	srand((unsigned)time(NULL));

	while (input() > 0) {
		if (size > MAX) {
			printf("100 이하의 수를 입력하세요.\n");
			continue;
		}

		// size 만큼의 난수를 생성하여 배열 numbers에 저장하고
		generate();
		// 선택 정렬 후
		selection_sort();
		// 배열 출력
		print();

		// 찾고자 하는 수를 이진 탐색으로 찾음
		printf("찾고자 하는 수 입력: ");
		scanf("%d", &key);
		if (binary_search(key) != -1) {
			printf("있습니다.\n");
		}
		else {
			printf("없습니다.\n");
		}
	}

	printf("프로그램 종료\n");

	return 0;
}

int input() {
	printf("생성할 숫자의 갯수 입력: ");
	scanf("%d", &size);
	return size;
}

void generate() {
	int i;
	for (i = 0; i < size; i++) {
		// 1 ~ 100 사이의 난수 생성
		numbers[i] = rand() % 100 + 1;
	}
}

void selection_sort() {
	// 선택 정렬 구현
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
	// 이진 탐색 구현
	int low = 0, high = size - 1, middle;

	while (low <= high) {
		middle = (low + high) / 2;
		if (numbers[middle] == key) return middle;
		else if (key < numbers[middle]) high = middle - 1;
		else low = middle + 1;
	}

	return -1;
}