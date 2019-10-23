/*
* Chapter 7.
* 실습 예제 3. 반 평균 구하기 프로그램
*/
#include <stdio.h>

int main() {

	// 변수 선언 및 초기화
	int n, i, score, sum = 0;
	double avg;

	// 입력부
	printf("성적을 입력할 학생 수 입력: ");
	scanf("%d", &n);

	if (n < 1) {
		printf("잘못된 입력입니다.\n");
		return 0;
	}

	// 학생수만큼 성적을 입력하고 총점 계산
	for (i = 0; i < n; i++) {
		printf("%d 번째 학생의 점수 입력: ", i + 1);
		scanf("%d", &score);
		sum += score;
	}

	// 평균 계산 및 출력
	avg = (double)sum / n;
	printf("반 평균은 %.2lf점입니다.\n", avg);

	return 0;
}