/*
* Chapter 3.
* �ǽ� ���� 4. ȯ�� ��� ���α׷�
*/
#include <stdio.h>

int main() {

	// ���� ����
	double exchange_rate, krw, usd;

	// ȯ�� �Է�
	printf("ȯ���� �Է��Ͻÿ�: ");
	scanf("%lf", &exchange_rate);

	// ��ȭ �Է�
	printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%lf", &krw);

	// �޷� ��� �� ��� ���
	usd = krw / exchange_rate;
	printf("��ȭ %.0f�� %f�޷��Դϴ�.\n", krw, usd);

	return 0;
}