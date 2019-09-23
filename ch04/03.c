/*
* Chapter 4.
* 실습 예제 3. 상자 부피 계산 프로그램
*/
#include <stdio.h>

int main() {

	// 변수 선언
	double w, l, h, v;

	// 길이, 너비, 높이 입력
	printf("상자의 가로, 세로, 높이를 한번에 입력: ");
	scanf("%lf %lf %lf", &w, &l, &h);

	// 상자의 부피 계산
	v = w * l * h;
	printf("상자의 부피는 %f입니다.\n", v);

	return 0;
}