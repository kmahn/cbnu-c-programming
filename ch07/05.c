/*
* Chapter 7.
* �ǽ� ���� 5. ������ ���ϱ� ���α׷�
*/
#include <stdio.h>
#include <math.h>

int main() {
	// ���� ����
	int n, k;
	double pi, pi_sum = 0;

	printf("�ݺ�Ƚ��: ");
	scanf("%d", &n);

	// ������ ���(���� ����)
	for (k = 0; k < n; k++) {
		pi_sum += pow(-1, k) / (2 * k + 1);
	}
	pi = 4 * pi_sum;

	// ������ ���
	printf("pi = %lf\n", pi);

	return 0;
}