/*
* Chapter 5.
* �ǽ� ���� 2. ���� �Ǻ� ���α׷�
*/
#include <stdio.h>

int main() {

	// ���� ����
	int year, result;

	// ���� �Է�
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &year);

	result = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

	printf("result = %d\n", result);

	return 0;
}
