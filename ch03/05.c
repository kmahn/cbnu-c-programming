/*
* Chapter 3.
* �ǽ� ���� 4. ȯ�� ��� ���α׷�
*/
#include <stdio.h>

int main() {
	// ���� ����
	double w, h, area, perimeter;

	// ���簢���� ���� �� ���� ���� �Է�
	printf("���簢���� ���� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &w);
	printf("���簢���� ���� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &h);

	// ���簢���� ���̿� �ѷ� ��� �� ���
	area = w * h;
	perimeter = 2 * (w + h);
	printf("���簢���� ����: %f\n", area);
	printf("���簢���� �ѷ�: %f\n", perimeter);

	return 0;
}