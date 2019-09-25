/*
* Chapter 5.
* 실습 예제 3. 거스름돈 계산 프로그램
*/
#include <stdio.h>

int main() {

	// 변수 선언
	int price, cash, rest, m5000, m1000, m500, m100;

	// 입력
	printf("구매 상품의 가격을 입력하시오: ");
	scanf("%d", &price);
	printf("사용자가 지불한 현금을 입력하시오: ");
	scanf("%d", &cash);

	// 거스름돈 계산
	rest = cash - price;
	m5000 = rest / 5000;
	m1000 = rest % 5000 / 1000;
	m500 = rest % 1000 / 500;
	m100 = rest % 500 / 100;

	// 거스름돈 출력
	printf("오천원권 %d장\n", m5000);
	printf("천원권 %d장\n", m1000);
	printf("오백원 동전 %d개\n", m500);
	printf("백원 동전 %d개\n", m100);
	printf("거스름돈: %d\n", rest);

	return 0;
}