/*
* Chapter 9.
* 실습 예제 4. 최대 공약수 구하기 프로그램(반복문 사용)
*/
#include <stdio.h>

int GCD(int, int);

int main() {
	int n1, n2, gcd;
	printf("두 수를 입력하시오 >> ");
	scanf("%d %d", &n1, &n2);
	gcd = GCD(n1, n2);
	printf("최대 공약수는 %d입니다.\n", gcd);
	return 0;
}

int GCD(int x, int y) {
	// 유클리드 알고리즘을 이용하여 구한 최대 공약수 리턴
	int tmp;
	while (y != 0) {
		x = x % y;
		tmp = x;
		x = y;
		y = tmp;
	}
	return x;
}
