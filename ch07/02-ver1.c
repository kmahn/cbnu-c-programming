/*
* Chapter 7.
* �ǽ� ���� 2. �ﰢ�� ��� ���α׷�(ver. 1)
*/
#include <stdio.h>

int main() {

	// ���� ����
	int n, i, j;

	// �Էº�
	printf("���� �Է�: ");
	scanf("%d", &n);

	if (n < 1) {
		printf("�߸��� �Է��Դϴ�.\n");
		return 0;
	}

	for (i = 1; i <= n; i++) {
		// * ���
		for (j = 1; j <= i; j++)
			printf("*");
		// ���� ��������
		printf("\n");
	}


	return 0;
}
