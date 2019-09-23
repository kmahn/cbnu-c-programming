/*
* Chapter 4.
* 실습 예제 4. 면적 환산 프로그램
*/
#include <stdio.h>
#define PYEONG 3.3

int main() {

	// 변수 선언
	double pyeong, square_meter;

	// 평수 입력
	printf("평수를 입력하세요: ");
	scanf("%lf", &pyeong);

	// 환산 및 출력
	square_meter = pyeong * PYEONG;
	printf("%f 평방미터입니다.\n", square_meter);

	return 0;
}