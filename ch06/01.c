/*
 * Chapter 6.
 * �ǽ� ���� 1. Ȧ��/¦�� �Ǻ� ���α׷�
*/
#include <stdio.h>

int main() {

	// ���� ����
	int n;

	// �Էº�
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	printf("�Էµ� ������ ");

	// Ȧ��, ¦�� ��º�
	// ����� 1(Ȧ��)�� ������ ������ �Ǻ��Ǳ� ����
	if (n % 2) {
		printf("Ȧ��");
	}
	else {
		printf("¦��");
	}
	printf("�Դϴ�.\n");

	return 0;
}
