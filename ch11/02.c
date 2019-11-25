/*
* Chapter 11.
* 실습 예제 2. 직선의 기울기와 y절편 구하기
*/
#include <stdio.h>

int get_line_parameter(int, int, int, int, double*, double*);

int main() {
	int x1, y1, x2, y2;
	double s, y;

	printf("첫 번째 좌표(x1, y1) 입력: ");
	scanf("%d %d", &x1, &y1);
	printf("두 번째 좌표(x1, y1) 입력: ");
	scanf("%d %d", &x2, &y2);

	if (get_line_parameter(x1, y1, x2, y2, &s, &y) == -1)
		printf("오류!\n");
	else
		printf("기울기는 %f, y절편은 %f\n", s, y);

	return 0;
}

int get_line_parameter(int x1, int y1, int x2, int y2, double *slope, double *yintercept) {
	int diffx = x2 - x1;

	if (diffx == 0) return -1;

	*slope = (y2 - y1) / (double)diffx;
	*yintercept = y1 - *slope * x1;

	return 0;
}