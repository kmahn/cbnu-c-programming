/*
* Chapter 6.
* �ǽ� ���� 4. ������������ �� ���ϱ� ���α׷�
*/
#include <stdio.h>
#include <math.h>

int main() {

	// ���� ����
	double a, b, c, D;

	// �Էº�
	printf("��� a, b, c�� ���ʴ�� �Է��Ͻÿ�: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a == 0) {
		if (b == 0) {
			// ��� a�� b�� 0�̸� ���� ���� �� ����.
			printf("���� ���� �� �����ϴ�.\n");
			return 1;
		}
		// a�� 0�̸� ����������(bx = c)
		printf("�������� ���� %lf�Դϴ�.\n", -c / b);
		return 0;
	}

	// �Ǻ���
	D = b * b - 4 * a * c;

	// ���
	if (D < 0) {
		printf("�Ǳ��� �������� �ʽ��ϴ�.\n");
	}
	// �߱�
	else if (D == 0.0) {
		printf("�������� ���� %lf�Դϴ�.\n", -b / (2 * a));
	}
	// �� ���� ��
	else {
		printf("�������� ���� %lf, %lf�Դϴ�.\n", (-b - sqrt(D)) / (2 * a), (-b + sqrt(D))/(2 * a));
	}

	return 0;
}