/*
* Chapter 3.
* �ǽ� ���� 2. ���� ��� ���α׷�
*/
#include <stdio.h>

int main() {

	// ���� ����
	int y_salary;
	int m_salary;

	// ���� �Է�
	printf("������ �Է��Ͻÿ�(����: ����): ");
	scanf("%d", &y_salary);

	// �����ɾ� ���
	m_salary = y_salary / 12;
	printf("�����ɾ�(����: ����): %d\n", m_salary);

	return 0;
}