/*
* Chapter 4.
* �ǽ� ���� 2. 8����, 10����, 16���� ���α׷�
*/
#include <stdio.h>

int main() {

	// ���� ����
	int number;

	// 16���� �Է�
	printf("16���� ������ �Է��Ͻÿ�: ");
	scanf("%x", &number);

	// ���
	printf("8�����δ� %o�Դϴ�.\n", number);
	printf("10�����δ� %d�Դϴ�.\n", number);
	printf("16�����δ� %x�Դϴ�.\n", number);

	return 0;
}