/*
* Chapter 8.
* 실습 예제 3. 조합 계산 프로그램
*/
#include <stdio.h>

long long combination(int, int);
long long factorial(int);

int main() {

	// 변수 선언 및 초기화
	int n, r;
	long long comb;

	// 입력부
	printf("C(n, r) 구하기\n");
	printf("n 입력 >> ");
	scanf("%d", &n);
	printf("r 입력 >> ");
	scanf("%d", &r);

	// 조합 계산
	comb = combination(n, r);

	printf("C(%d, %d) = %lld\n", n, r, comb);

	return 0;
}

long long combination(int n, int r) {
	return factorial(n) / (factorial(n - r) * factorial(r));
}

long long factorial(int n) {
	long long result = 1;
	int i;

	for (i = 2; i <= n; i++) result *= i;

	return result;
}