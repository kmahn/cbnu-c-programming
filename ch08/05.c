/*
* Chapter 8.
* 실습 예제 5. 나무 높이 측정 프로그램
*/
#include <stdio.h>
#include <math.h>
#define PI 3.141592

double calc_height(double, double, double);

int main() {
	// 변수 선언
	double dist, h, deg;

	// 입력부
	printf("나무와의 거리(단위는 미터): ");
	scanf("%lf", &dist);

	printf("측정자의 눈 높이(단위는 미터): ");
	scanf("%lf", &h);

	printf("각도(단위는 도): ");
	scanf("%lf", &deg);

	// 나무의 높이를 구하여 출력
	printf("나무의 높이 = %lfm\n", calc_height(dist, h, deg));

	return 0;
}

double calc_height(double distance, double height, double degree) {
	double radian = degree * PI / 180;
	return height + tan(radian) * distance;
}
