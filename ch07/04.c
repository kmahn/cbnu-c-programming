/*
* Chapter 7.
* �ǽ� ���� 4. ���� ���߱� ����
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int n, input, i = 1;

	// rand() �Լ� �õ尪 ����
	srand((unsigned)time(NULL));

	// ���� ���� ���ϱ�
	n = rand() % 100 + 1;
	input = 0;

	// ������ �ƴ� ���� �ݺ�
	while (n != input) {
		printf("%d ��° �õ�, ���� �Է�: ", i++);
		scanf("%d", &input);

		// �Էµ� �� ����
		if (input < 1 || input > 100) {
			printf("1 ~ 100 ������ ���� �Է��ϼ���.\n");
		}
		else {
			if (n < input) {
				printf("Down\n");
			}
			else if (n > input) {
				printf("Up\n");
			}
			else {
				printf("Awesome\n");
			}
		}
	}

	return 0;
}