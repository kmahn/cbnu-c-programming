/*
* Chapter 6.
* �ǽ� ���� 2. ���� �Ǻ� ���α׷�
*/
#include <stdio.h>

int main() {

	// ���� ����
	int year;

	// ���� �Է�
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &year);

	printf("%d���� ����", year);

	// �������� �ƴ��� ���
	if (year % 400 == 0) {
		printf("�Դϴ�.");
	}
	else if (year % 100 == 0) {
		printf("�� �ƴմϴ�.");
	}
	else if (year % 4 == 0) {
		printf("�Դϴ�.");
	}
	else {
		printf("�� �ƴմϴ�.");
	}

	printf("\n");


	return 0;
}
