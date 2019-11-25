/*
* Chapter 11.
* �ǽ� ���� 2. ������ ����� y���� ���ϱ�
*/
#include <stdio.h>

int get_line_parameter(int, int, int, int, double*, double*);

int main() {
	int x1, y1, x2, y2;
	double s, y;

	printf("ù ��° ��ǥ(x1, y1) �Է�: ");
	scanf("%d %d", &x1, &y1);
	printf("�� ��° ��ǥ(x1, y1) �Է�: ");
	scanf("%d %d", &x2, &y2);

	if (get_line_parameter(x1, y1, x2, y2, &s, &y) == -1)
		printf("����!\n");
	else
		printf("����� %f, y������ %f\n", s, y);

	return 0;
}

int get_line_parameter(int x1, int y1, int x2, int y2, double *slope, double *yintercept) {
	int diffx = x2 - x1;

	if (diffx == 0) return -1;

	*slope = (y2 - y1) / (double)diffx;
	*yintercept = y1 - *slope * x1;

	return 0;
}