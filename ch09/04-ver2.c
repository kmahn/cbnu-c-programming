/*
* Chapter 9.
* �ǽ� ���� 4. �ִ� ����� ���ϱ� ���α׷�(��ȯ�Լ� ���)
*/
#include <stdio.h>

int GCD(int, int);

int main() {
	int n1, n2, gcd;
	printf("�� ���� �Է��Ͻÿ� >> ");
	scanf("%d %d", &n1, &n2);
	gcd = GCD(n1, n2);
	printf("�ִ� ������� %d�Դϴ�.\n", gcd);
	return 0;
}

int GCD(int x, int y) {
	// ��Ŭ���� �˰����� �̿��Ͽ� ���� �ִ� ����� ����
	if (y == 0) return x;
	GCD(y, x % y);
}
