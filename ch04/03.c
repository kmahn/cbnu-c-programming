/*
* Chapter 4.
* �ǽ� ���� 3. ���� ���� ��� ���α׷�
*/
#include <stdio.h>

int main() {

	// ���� ����
	double w, l, h, v;

	// ����, �ʺ�, ���� �Է�
	printf("������ ����, ����, ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &w, &l, &h);

	// ������ ���� ���
	v = w * l * h;
	printf("������ ���Ǵ� %f�Դϴ�.\n", v);

	return 0;
}