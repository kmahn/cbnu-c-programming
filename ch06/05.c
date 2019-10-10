/*
* Chapter 6.
* �ǽ� ���� 5. ��� ���� ���α׷�
*/
#include <stdio.h>

int main() {
	// ���� ����
	int n1, n2, result;
	char op;

	// �Է�
	printf("������ �Է��Ͻÿ�(��: 2 + 5) >> ");
	scanf("%d %c %d", &n1, &op, &n2);

	// ���Ŀ� ���� ��� ���
	switch (op) {
	case '+':
		result = n1 + n2;
		break;
	case '-':
		result = n1 - n2;
		break;
	case '*':
		result = n1 * n2;
		break;
	case '/':
		if (n2 == 0) {
			printf("0���δ� ���� �� �����ϴ�.\n");
			return 1;
		}
		result = n1 / n2;
		break;
	case '%':
		if (n2 == 0) {
			printf("0���δ� ���� �� �����ϴ�.\n");
			return 1;
		}
		result = n1 % n2;
		break;
	default:
		printf("�������� �ʴ� �������Դϴ�.\n");
		return 1;
	}

	printf("%d %c %d = %d\n", n1, op, n2, result);

	return 0;
}