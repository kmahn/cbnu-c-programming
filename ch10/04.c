/*
* Chapter 10.
* 실습 예제 4. 이미지 반전 프로그램
*/
#include <stdio.h>

// 이미지를 담은 배열
int image[5][10] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
	{1, 1, 0, 0, 0, 1, 1, 1, 0, 1},
	{1, 0, 0, 0, 0, 0, 1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

// 함수 원형 선언
void print_image();
void inverse_image();

int main() {

	printf("반전하기 전\n");
	print_image();

	inverse_image();

	printf("\n반전 후\n");
	print_image();

	return 0;
}

void print_image() {
	// 이미지 출력 함수
	int y, x;
	for (y = 0; y < 5; y++) {
		for (x = 0; x < 10; x++) {
			// 값이 1이면 " ", 아니면 "*" 출력
			if (image[y][x]) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}

void inverse_image() {
	int y, x;
	for (y = 0; y < 5; y++) {
		for (x = 0; x < 10; x++) {
			// 값을 반전함
			image[y][x] = !image[y][x];
		}
	}
}