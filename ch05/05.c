/*
* Chapter 5.
* �ǽ� ���� 5. XOR�� �̿��� ��ȣȭ ���α׷�
*/
#include <stdio.h>

int main() {
	// ���� ����
	char c, key, enc, dec;

	// �Է�
	printf("��ȣȭ�� ���ڿ� key ���ڸ� �������� �Է�: ");
	scanf("%c %c", &c, &key);

	// ��ȣȭ �� ��ȣȭ ���� ���
	enc = c ^ key;
	printf("��ȣȭ�� ����: %c\n", enc);

	// ��ȣȭ �� ��ȣȭ�� ���� ���
	dec = enc ^ key;
	printf("��ȣȭ�� ����: %c\n", dec);


	return 0;
}