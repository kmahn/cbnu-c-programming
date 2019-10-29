/*
* Chapter 8.
* �ǽ� ���� 4. �� �� ������ �Ÿ� ���ϱ� ���α׷�
*/
#include <stdio.h>
#include <math.h>

double get_distance(double, double, double, double);

int main() {

	// �������� ����
	double x1, y1, x2, y2, dist;

	// �Էº�
	printf("ù ��° ��ǥ �Է�(x1, y1): ");
	scanf("%lf %lf", &x1, &y1);

	printf("�� ��° ��ǥ �Է�(x2, y2): ");
	scanf("%lf %lf", &x2, &y2);

	// �� �� ������ �Ÿ� ���
	dist = get_distance(x1, y1, x2, y2);
	printf("�� ��(%lf, %lf), (%lf, %lf) ������ �Ÿ��� %lf\n", x1, y1, x2, y2, dist);

	return 0;
}

double get_distance(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}