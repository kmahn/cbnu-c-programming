/*
 * Chapter 8.
 * 실습 예제 1. 팩토리얼 계산 프로그램
*/
#include <stdio.h>

int input();
long long factorial(int n);

int main() {

	// 변수 선언
	int n;

	while ((n = input()) >= 0) {
		printf("%d! = %lld\n", n, factorial(n));
	}

	printf("프로그램 종료\n");

	return 0;
}

int input() {
	int n;
	printf("n! 구하기, n 입력(종료 시 음수 입력) >> ");
	scanf("%d", &n);
	return n;
}

long long factorial(int n) {
	long long result = 1;
	int i;

	for (i = 2; i <= n; i++) result *= i;

	return result;
}
