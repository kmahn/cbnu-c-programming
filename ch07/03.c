/*
* Chapter 7.
* �ǽ� ���� 3. �� ��� ���ϱ� ���α׷�
*/
#include <stdio.h>

int main() {

	// ���� ���� �� �ʱ�ȭ
	int n, i, score, sum = 0;
	double avg;

	// �Էº�
	printf("������ �Է��� �л� �� �Է�: ");
	scanf("%d", &n);

	if (n < 1) {
		printf("�߸��� �Է��Դϴ�.\n");
		return 0;
	}

	// �л�����ŭ ������ �Է��ϰ� ���� ���
	for (i = 0; i < n; i++) {
		printf("%d ��° �л��� ���� �Է�: ", i + 1);
		scanf("%d", &score);
		sum += score;
	}

	// ��� ��� �� ���
	avg = (double)sum / n;
	printf("�� ����� %.2lf���Դϴ�.\n", avg);

	return 0;
}