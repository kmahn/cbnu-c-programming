/*
* Chapter 5.
* �ǽ� ���� 3. �Ž����� ��� ���α׷�
*/
#include <stdio.h>

int main() {

	// ���� ����
	int price, cash, rest, m5000, m1000, m500, m100;

	// �Է�
	printf("���� ��ǰ�� ������ �Է��Ͻÿ�: ");
	scanf("%d", &price);
	printf("����ڰ� ������ ������ �Է��Ͻÿ�: ");
	scanf("%d", &cash);

	// �Ž����� ���
	rest = cash - price;
	m5000 = rest / 5000;
	m1000 = rest % 5000 / 1000;
	m500 = rest % 1000 / 500;
	m100 = rest % 500 / 100;

	// �Ž����� ���
	printf("��õ���� %d��\n", m5000);
	printf("õ���� %d��\n", m1000);
	printf("����� ���� %d��\n", m500);
	printf("��� ���� %d��\n", m100);
	printf("�Ž�����: %d\n", rest);

	return 0;
}