/*
 * Chapter 3.
 * �ǽ� ���� 1. ���� ���α׷�
*/
#include <stdio.h>

int main() {

	// ���� ����
	int x;
	int y;
	int sum;

	// �Է� �κ�
	printf("ù ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("�� ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &y);

	// ���� ����ϰ� ����ϴ� �κ�
	sum = x + y;
	printf("�� ���� ��: %d\n", sum);

	return 0;
}