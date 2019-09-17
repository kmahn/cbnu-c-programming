/*
* Chapter 3.
* 실습 예제 4. 환율 계산 프로그램
*/
#include <stdio.h>

int main() {
	// 변수 선언
	double w, h, area, perimeter;

	// 직사각형의 가로 및 세로 길이 입력
	printf("직사각형의 가로 길이를 입력하시오: ");
	scanf("%lf", &w);
	printf("직사각형의 세로 길이를 입력하시오: ");
	scanf("%lf", &h);

	// 직사각형의 넓이와 둘레 계산 및 출력
	area = w * h;
	perimeter = 2 * (w + h);
	printf("직사각형의 넓이: %f\n", area);
	printf("직사각형의 둘레: %f\n", perimeter);

	return 0;
}