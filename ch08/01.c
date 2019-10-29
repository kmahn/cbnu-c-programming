/*
 * Chapter 8.
 * �ǽ� ���� 1. ���丮�� ��� ���α׷�
*/
#include <stdio.h>

int input();
long long factorial(int n);

int main() {

	// ���� ����
	int n;

	while ((n = input()) >= 0) {
		printf("%d! = %lld\n", n, factorial(n));
	}

	printf("���α׷� ����\n");

	return 0;
}

int input() {
	int n;
	printf("n! ���ϱ�, n �Է�(���� �� ���� �Է�) >> ");
	scanf("%d", &n);
	return n;
}

long long factorial(int n) {
	long long result = 1;
	int i;

	for (i = 2; i <= n; i++) result *= i;

	return result;
}
