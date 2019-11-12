/*
* Chapter 9.
* �ǽ� ���� 3. ���� �Ű� ���� �ǽ�
*/
#include <stdio.h>
#include <stdarg.h>

void print_concat(int, ...);

int main() {
	print_concat(5, 'a', 'p', 'p', 'l', 'e');
	printf("\n");
	print_concat(11, 'p', 'r', 'o', 'g', 'r', 'a', 'm', 'm', 'i', 'n', 'g');
	printf("\n");
	return 0;
}

void print_concat(int num, ...) {
	va_list args;
	va_start(args, num);
	while (num--) {
		char c = va_arg(args, char);
		printf("%c", c);
	}
	va_end(args);
}