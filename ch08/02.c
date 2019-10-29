/*
* Chapter 8.
* �ǽ� ���� 2. �µ� ��ȯ ���α׷�
*/
#include <stdio.h>

int select_menu();
double c2f(double);
double f2c(double);

int main() {
	int choice;
	double temp;

	while ((choice = select_menu()) != 3) {
		switch (choice) {
		case 1:
			printf("���� �µ� �Է� >> ");
			scanf("%lf", &temp);
			printf("���� %.2lf���� ȭ�� %.2lf���Դϴ�.\n", temp, c2f(temp));
			break;
		case 2:
			printf("ȭ�� �µ� �Է� >> ");
			scanf("%lf", &temp);
			printf("ȭ�� %.2lf���� ���� %.2lf���Դϴ�.\n", temp, f2c(temp));
			break;
		default:
			printf("�߸��� �����Դϴ�.\n");
		}
	}

	printf("���α׷� ����\n");

	return 0;
}

int select_menu() {
	int c;
	printf("===================\n");
	printf("1. ���� -> ȭ��\n");
	printf("2. ȭ�� -> ����\n");
	printf("3. ����\n");
	printf("===================\n");
	printf("���� >> ");
	scanf("%d", &c);
	return c;
}

double c2f(double temp) {
	return temp * 9 / 5 + 32;
}

double f2c(double temp) {
	return (temp - 32) * 5 / 9;
}