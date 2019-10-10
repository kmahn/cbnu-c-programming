/*
* Chapter 6.
* 실습 예제 5. 산술 계산기 프로그램
*/
#include <stdio.h>

int main() {
	// 변수 선언
	int n1, n2, result;
	char op;

	// 입력
	printf("수식을 입력하시오(예: 2 + 5) >> ");
	scanf("%d %c %d", &n1, &op, &n2);

	// 수식에 따른 결과 계산
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
			printf("0으로는 나눌 수 없습니다.\n");
			return 1;
		}
		result = n1 / n2;
		break;
	case '%':
		if (n2 == 0) {
			printf("0으로는 나울 수 없습니다.\n");
			return 1;
		}
		result = n1 % n2;
		break;
	default:
		printf("지원하지 않는 연산자입니다.\n");
		return 1;
	}

	printf("%d %c %d = %d\n", n1, op, n2, result);

	return 0;
}