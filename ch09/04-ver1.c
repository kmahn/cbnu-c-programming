/*
* Chapter 9.
* �ǽ� ���� 4. �ִ� ����� ���ϱ� ���α׷�(�ݺ��� ���)
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
	int tmp;
	while (y != 0) {
		x = x % y;
		tmp = x;
		x = y;
		y = tmp;
	}
	return x;
}
