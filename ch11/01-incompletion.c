/*
 * Chapter 11.
 * 실습 예제 1. swap 함수를 이용한 선택 정렬 프로그램 - 프로그램 구조
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
	// 여기에 구현(리턴값은 변경해야 함)
	return 0;
}

void generate(int list[], int size) {
	// 여기에 구현
}

void print(const int list[], int size) {
	// 여기에 구현
}

void selection_sort(int list[], int size) {
	// 여기에 구현
}

void swap(int *x, int *y) {
	// 여기에 구현
}