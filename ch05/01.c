/*
 * Chapter 5.
 * �ǽ� ���� 1. ���� ��/ū �� �Ǻ� ���α׷�
*/
#include <stdio.h>

int main() {

	int n1, n2, max, min;

	printf("�� ���� �����ؼ� �Է��Ͻÿ�: ");
	scanf("%d %d", &n1, &n2);

	min = n1 < n2 ? n1 : n2;
	max = n1 > n2 ? n1 : n2;

	printf("���� ��: %d\n", min);
	printf("ū ��: %d\n", max);

	return 0;
}
