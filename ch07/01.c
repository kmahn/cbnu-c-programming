/*
 * Chapter 7.
 * �ǽ� ���� 1. ������ ���α׷�
*/
#include <stdio.h>

int main() {

	int n, i;

	printf("2 ~ 9 ������ �� �Է�: ");
	scanf("%d", &n);

	if (n < 2 || n > 9) {
		printf("�߸��� �Է��Դϴ�.\n");
		return 0;
	}

	for (i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", n, i, n * i);

	return 0;
}
