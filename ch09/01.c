/*
 * Chapter 9.
 * �ǽ� ���� 1. ���� ����, static ���� ���� �ǽ�
*/
#include <stdio.h>

// ���� ���� ����
int count;

// �Լ� ���� ����
int work1();
int work2();
int select_menu();

int main() {
	int choice, w1, w2;

	// ���Ḧ �������� ���� ���� �ݺ�
	while ((choice = select_menu()) != 3) {
		switch (choice) {
		case 1:
			w1 = work1();
			break;
		case 2:
			w2 = work2();
			break;
		default:
			printf("�߸��� �Է��Դϴ�.\n");
		}
	}

	printf("�۾�1 Ƚ��: %d\n", w1);
	printf("�۾�2 Ƚ��: %d\n", w2);
	printf("�� �۾���: %d\n", count);

	return 0;
}

int work1() {
	// ���� ���� ���� ����(work2() �Լ��� ���� ���� c�� �̸��� ���� �ٸ� �����̴�.)
	static int c = 0;
	printf("�۾�1�� �����߽��ϴ�.\n");
	c++;
	count++;
	return c;
}

int work2() {
	// ���� ���� ���� ����(work1() �Լ��� ���� ���� c�� �̸��� ���� �ٸ� �����̴�.)
	static int c = 0;
	printf("�۾�2�� �����߽��ϴ�.\n");
	c++;
	count++;
	return c;
}

int select_menu() {
	int choice;

	// �޴� ���
	printf("1. �۾�1\n");
	printf("2. �۾�2\n");
	printf("3. ���α׷� ����\n");
	printf("����: ");

	// ������ �޴� ����
	scanf("%d", &choice);
	return choice;
}