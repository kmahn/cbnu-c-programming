/*
* Chapter 8.
* �ǽ� ���� 5. ���� ���� ���� ���α׷�
*/
#include <stdio.h>
#include <math.h>
#define PI 3.141592

double calc_height(double, double, double);

int main() {
	// ���� ����
	double dist, h, deg;

	// �Էº�
	printf("�������� �Ÿ�(������ ����): ");
	scanf("%lf", &dist);

	printf("�������� �� ����(������ ����): ");
	scanf("%lf", &h);

	printf("����(������ ��): ");
	scanf("%lf", &deg);

	// ������ ���̸� ���Ͽ� ���
	printf("������ ���� = %lfm\n", calc_height(dist, h, deg));

	return 0;
}

double calc_height(double distance, double height, double degree) {
	double radian = degree * PI / 180;
	return height + tan(radian) * distance;
}
