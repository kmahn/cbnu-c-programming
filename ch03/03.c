/*
* Chapter 3.
* 실습 예제 3. 원의 면적 계산 프로그램
*/
#include <stdio.h>

int main() {

	// 변수 선언
	float radius;
	float area;

	// 반지름 입력
	printf("반지름을 입력하시오: ");
	scanf("%f", &radius);

	// 원의 넓이 계산
	area = 3.14 * radius * radius;
	printf("원의 면적: %f\n", area);

	return 0;
}