/*
* Chapter 3.
* 실습 예제 2. 연봉 계산 프로그램
*/
#include <stdio.h>

int main() {

	// 변수 선언
	int y_salary;
	int m_salary;

	// 연봉 입력
	printf("연봉을 입력하시오(단위: 만원): ");
	scanf("%d", &y_salary);

	// 월수령액 계산
	m_salary = y_salary / 12;
	printf("월수령액(단위: 만원): %d\n", m_salary);

	return 0;
}