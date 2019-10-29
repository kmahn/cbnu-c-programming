/*
* Chapter 8.
* 실습 예제 4. 두 점 사이의 거리 구하기 프로그램
*/
#include <stdio.h>
#include <math.h>

double get_distance(double, double, double, double);

int main() {

	// 지역변수 선언
	double x1, y1, x2, y2, dist;

	// 입력부
	printf("첫 번째 좌표 입력(x1, y1): ");
	scanf("%lf %lf", &x1, &y1);

	printf("두 번째 좌표 입력(x2, y2): ");
	scanf("%lf %lf", &x2, &y2);

	// 두 점 사이의 거리 계산
	dist = get_distance(x1, y1, x2, y2);
	printf("두 점(%lf, %lf), (%lf, %lf) 사이의 거리는 %lf\n", x1, y1, x2, y2, dist);

	return 0;
}

double get_distance(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}