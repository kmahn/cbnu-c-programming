/*
 * Chapter 9.
 * 실습 예제 1. 전역 변수, static 지역 변수 실습
*/
#include <stdio.h>

// 전역 변수 선언
int count;

// 함수 원형 선언
int work1();
int work2();
int select_menu();

int main() {
	int choice, w1, w2;

	// 종료를 선택하지 않은 동안 반복
	while ((choice = select_menu()) != 3) {
		switch (choice) {
		case 1:
			w1 = work1();
			break;
		case 2:
			w2 = work2();
			break;
		default:
			printf("잘못된 입력입니다.\n");
		}
	}

	printf("작업1 횟수: %d\n", w1);
	printf("작업2 횟수: %d\n", w2);
	printf("총 작업량: %d\n", count);

	return 0;
}

int work1() {
	// 정적 지역 변수 선언(work2() 함수의 지역 변수 c와 이름만 같고 다른 변수이다.)
	static int c = 0;
	printf("작업1을 수행했습니다.\n");
	c++;
	count++;
	return c;
}

int work2() {
	// 정적 지역 변수 선언(work1() 함수의 지역 변수 c와 이름만 같고 다른 변수이다.)
	static int c = 0;
	printf("작업2를 수행했습니다.\n");
	c++;
	count++;
	return c;
}

int select_menu() {
	int choice;

	// 메뉴 출력
	printf("1. 작업1\n");
	printf("2. 작업2\n");
	printf("3. 프로그램 종료\n");
	printf("선택: ");

	// 선택한 메뉴 리턴
	scanf("%d", &choice);
	return choice;
}