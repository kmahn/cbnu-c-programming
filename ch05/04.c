/*
* Chapter 5.
* �ǽ� ���� 4. 2���� ��ȯ ���α׷�
*/
#include <stdio.h>

int main() {

	// ���� ����
	unsigned digit, mask = 1 << 7;

	// �Էº�
	printf("10 ���� �Է�: ");
	scanf("%d", &digit);

	// 2���� ��º�
	printf("2 ����: ", digit);
	(digit & mask) == 0 ? printf("0") : printf("1");
	mask >>= 1;
	(digit & mask) == 0 ? printf("0") : printf("1");
	mask >>= 1;
	(digit & mask) == 0 ? printf("0") : printf("1");
	mask >>= 1;
	(digit & mask) == 0 ? printf("0") : printf("1");
	mask >>= 1;
	(digit & mask) == 0 ? printf("0") : printf("1");
	mask >>= 1;
	(digit & mask) == 0 ? printf("0") : printf("1");
	mask >>= 1;
	(digit & mask) == 0 ? printf("0") : printf("1");
	mask >>= 1;
	(digit & mask) == 0 ? printf("0") : printf("1");
	printf("\n");

	return 0;
}