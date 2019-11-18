/*
* Chapter 10.
* �ǽ� ���� 4. �̹��� ���� ���α׷�
*/
#include <stdio.h>

// �̹����� ���� �迭
int image[5][10] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
	{1, 1, 0, 0, 0, 1, 1, 1, 0, 1},
	{1, 0, 0, 0, 0, 0, 1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

// �Լ� ���� ����
void print_image();
void inverse_image();

int main() {

	printf("�����ϱ� ��\n");
	print_image();

	inverse_image();

	printf("\n���� ��\n");
	print_image();

	return 0;
}

void print_image() {
	// �̹��� ��� �Լ�
	int y, x;
	for (y = 0; y < 5; y++) {
		for (x = 0; x < 10; x++) {
			// ���� 1�̸� " ", �ƴϸ� "*" ���
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
			// ���� ������
			image[y][x] = !image[y][x];
		}
	}
}