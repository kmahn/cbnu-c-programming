/*
* Chapter 6.
* 실습 예제 4. 이차방정식의 근 구하기 프로그램
*/
#include <stdio.h>
#include <math.h>

int main() {

	// 변수 선언
	double a, b, c, D;

	// 입력부
	printf("계수 a, b, c를 차례대로 입력하시오: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a == 0) {
		if (b == 0) {
			// 계수 a와 b가 0이면 근을 구할 수 없음.
			printf("근을 구할 수 없습니다.\n");
			return 1;
		}
		// a가 0이면 일차방정식(bx = c)
		printf("방정식의 근은 %lf입니다.\n", -c / b);
		return 0;
	}

	// 판별식
	D = b * b - 4 * a * c;

	// 허근
	if (D < 0) {
		printf("실근이 존재하지 않습니다.\n");
	}
	// 중근
	else if (D == 0.0) {
		printf("방정식의 근은 %lf입니다.\n", -b / (2 * a));
	}
	// 두 개의 근
	else {
		printf("방정식의 근은 %lf, %lf입니다.\n", (-b - sqrt(D)) / (2 * a), (-b + sqrt(D))/(2 * a));
	}

	return 0;
}