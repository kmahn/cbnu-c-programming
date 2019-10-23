/*
* Chapter 7.
* 실습 예제 5. 원주율 구하기 프로그램
*/
#include <stdio.h>
#include <math.h>

int main() {
	// 변수 선언
	int n, k;
	double pi, pi_sum = 0;

	printf("반복횟수: ");
	scanf("%d", &n);

	// 원주율 계산(공식 적용)
	for (k = 0; k < n; k++) {
		pi_sum += pow(-1, k) / (2 * k + 1);
	}
	pi = 4 * pi_sum;

	// 원주율 출력
	printf("pi = %lf\n", pi);

	return 0;
}