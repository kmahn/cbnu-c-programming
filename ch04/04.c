/*
* Chapter 4.
* �ǽ� ���� 4. ���� ȯ�� ���α׷�
*/
#include <stdio.h>
#define PYEONG 3.3

int main() {

	// ���� ����
	double pyeong, square_meter;

	// ��� �Է�
	printf("����� �Է��ϼ���: ");
	scanf("%lf", &pyeong);

	// ȯ�� �� ���
	square_meter = pyeong * PYEONG;
	printf("%f �������Դϴ�.\n", square_meter);

	return 0;
}