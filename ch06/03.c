/*
* Chapter 6.
* �ǽ� ���� 3. ���� �з� ���α׷�
*/
#include <stdio.h>

int main() {

	// ���� ����
	char c;

	// �Էº�
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &c);

	printf("%c�� ", c);

	// ���� ���� ���
	if ('a' <= c && c <= 'z') {
		printf("�ҹ���");
	}
	else if ('A' <= c && c <= 'Z') {
		printf("�빮��");
	}
	else if ('0' <= c && c <= '9') {
		printf("����");
	}
	else {
		printf("��Ÿ����");
	}

	printf("�Դϴ�.\n");

	return 0;
}