/*
* Chapter 5.
* 실습 예제 5. XOR를 이용한 암호화 프로그램
*/
#include <stdio.h>

int main() {
	// 변수 선언
	char c, key, enc, dec;

	// 입력
	printf("암호화할 문자와 key 문자를 연속으로 입력: ");
	scanf("%c %c", &c, &key);

	// 암호화 및 암호화 문자 출력
	enc = c ^ key;
	printf("암호화된 문자: %c\n", enc);

	// 복호화 및 복호화된 문자 출력
	dec = enc ^ key;
	printf("복호화된 문자: %c\n", dec);


	return 0;
}