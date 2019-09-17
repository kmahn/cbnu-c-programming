/*
* Chapter 3.
* 실습 예제 4. 환율 계산 프로그램
*/
#include <stdio.h>

int main() {

	// 변수 선언
	double exchange_rate, krw, usd;

	// 환율 입력
	printf("환율을 입력하시오: ");
	scanf("%lf", &exchange_rate);

	// 원화 입력
	printf("원화 금액을 입력하시오: ");
	scanf("%lf", &krw);

	// 달러 계산 및 결과 출력
	usd = krw / exchange_rate;
	printf("원화 %.0f은 %f달러입니다.\n", krw, usd);

	return 0;
}