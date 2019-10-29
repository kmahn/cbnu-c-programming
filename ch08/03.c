/*
* Chapter 8.
* �ǽ� ���� 3. ���� ��� ���α׷�
*/
#include <stdio.h>

long long combination(int, int);
long long factorial(int);

int main() {

	// ���� ���� �� �ʱ�ȭ
	int n, r;
	long long comb;

	// �Էº�
	printf("C(n, r) ���ϱ�\n");
	printf("n �Է� >> ");
	scanf("%d", &n);
	printf("r �Է� >> ");
	scanf("%d", &r);

	// ���� ���
	comb = combination(n, r);

	printf("C(%d, %d) = %lld\n", n, r, comb);

	return 0;
}

long long combination(int n, int r) {
	return factorial(n) / (factorial(n - r) * factorial(r));
}

long long factorial(int n) {
	long long result = 1;
	int i;

	for (i = 2; i <= n; i++) result *= i;

	return result;
}