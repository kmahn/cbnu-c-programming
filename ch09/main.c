/*
* Chapter 9.
* 실습 예제 2. 외부 연결 실습(main.c)
*/
#include <stdio.h>

extern void print_option();
extern const int OPTION1;
extern const int OPTION2;
extern void add_option(int);
extern void remove_option(int);

int select_menu();

int main() {
	int choice;
	while ((choice = select_menu()) != 5) {
		switch (choice) {
		case 1: add_option(OPTION1); break;
		case 2: remove_option(OPTION1); break;
		case 3: add_option(OPTION2); break;
		case 4: remove_option(OPTION2); break;
		default: printf("잘못된 입력\n");
		}
		
		printf("\n");
		print_option();
		printf("\n");
	}
	return 0;
}

int select_menu() {
	int choice;

	// 메뉴 출력
	printf("1. 옵션 1 설정\n");
	printf("2. 옵션 1 해제\n");
	printf("3. 옵션 2 설정\n");
	printf("4. 옵션 2 해제\n");
	printf("5. 프로그램 종료\n");
	printf("선택 >> ");

	// 선택한 메뉴 리턴
	scanf("%d", &choice);
	return choice;
}