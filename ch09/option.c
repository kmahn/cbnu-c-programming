/*
* Chapter 9.
* �ǽ� ���� 2. �ܺ� ���� �ǽ�(option.c)
*/
#include <stdio.h>

// �ܺ� ������ ���� ���� ����
const int OPTION1 = 0x1;
const int OPTION2 = 0x2;

// ���� ������ ���� ���� ����
static int option = 0x00;

void print_option() {
	// �ɼ�1 ���� ���� ���
	if (option & OPTION1) printf("�ɼ�1 ����\n");
	else printf("�ɼ�1 ����\n");

	// �ɼ�2 ���� ���� ���
	if (option & OPTION2) printf("�ɼ�2 ����\n");
	else printf("�ɼ�2 ����\n");
}

void add_option(int opt) {
	// �ش� �ɼ��� ��Ʈ �߰�
	option |= opt;
}

void remove_option(int opt) {
	// �ش� �ɼ��� ��Ʈ ����
	option &= ~opt;
}

