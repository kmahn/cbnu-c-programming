/*
* Chapter 9.
* �ǽ� ���� 2. �ܺ� ���� �ǽ�(main.c)
*/
#include <stdio.h>

extern void print_option();
extern const int OPTION1;
extern const int OPTION2;
extern void add_option(int);
extern void remove_option(int);

int select_menu();

int main() {
	int choice;
	while ((choice = select_menu()) != 5) {
		switch (choice) {
		case 1: add_option(OPTION1); break;
		case 2: remove_option(OPTION1); break;
		case 3: add_option(OPTION2); break;
		case 4: remove_option(OPTION2); break;
		default: printf("�߸��� �Է�\n");
		}
		
		printf("\n");
		print_option();
		printf("\n");
	}
	return 0;
}

int select_menu() {
	int choice;

	// �޴� ���
	printf("1. �ɼ� 1 ����\n");
	printf("2. �ɼ� 1 ����\n");
	printf("3. �ɼ� 2 ����\n");
	printf("4. �ɼ� 2 ����\n");
	printf("5. ���α׷� ����\n");
	printf("���� >> ");

	// ������ �޴� ����
	scanf("%d", &choice);
	return choice;
}