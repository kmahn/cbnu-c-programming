/*
* Chapter 7.
* 실습 예제 4. 숫자 맞추기 게임
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int n, input, i = 1;

	// rand() 함수 시드값 설정
	srand((unsigned)time(NULL));

	// 맞출 숫자 정하기
	n = rand() % 100 + 1;
	input = 0;

	// 정답이 아닌 동안 반복
	while (n != input) {
		printf("%d 번째 시도, 숫자 입력: ", i++);
		scanf("%d", &input);

		// 입력된 값 검증
		if (input < 1 || input > 100) {
			printf("1 ~ 100 사이의 수를 입력하세요.\n");
		}
		else {
			if (n < input) {
				printf("Down\n");
			}
			else if (n > input) {
				printf("Up\n");
			}
			else {
				printf("Awesome\n");
			}
		}
	}

	return 0;
}