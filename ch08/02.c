/*
* Chapter 8.
* ½Ç½À ¿¹Á¦ 2. ¿Âµµ º¯È¯ ÇÁ·Î±×·¥
*/
#include <stdio.h>

int select_menu();
double c2f(double);
double f2c(double);

int main() {
	int choice;
	double temp;

	while ((choice = select_menu()) != 3) {
		switch (choice) {
		case 1:
			printf("¼·¾¾ ¿Âµµ ÀÔ·Â >> ");
			scanf("%lf", &temp);
			printf("¼·¾¾ %.2lfµµ´Â È­¾¾ %.2lfµµÀÔ´Ï´Ù.\n", temp, c2f(temp));
			break;
		case 2:
			printf("È­¾¾ ¿Âµµ ÀÔ·Â >> ");
			scanf("%lf", &temp);
			printf("È­¾¾ %.2lfµµ´Â ¼·¾¾ %.2lfµµÀÔ´Ï´Ù.\n", temp, f2c(temp));
			break;
		default:
			printf("Àß¸øµÈ ¼±ÅÃÀÔ´Ï´Ù.\n");
		}
	}

	printf("ÇÁ·Î±×·¥ Á¾·á\n");

	return 0;
}

int select_menu() {
	int c;
	printf("===================\n");
	printf("1. ¼·¾¾ -> È­¾¾\n");
	printf("2. È­¾¾ -> ¼·¾¾\n");
	printf("3. Á¾·á\n");
	printf("===================\n");
	printf("¼±ÅÃ >> ");
	scanf("%d", &c);
	return c;
}

double c2f(double temp) {
	return temp * 9 / 5 + 32;
}

double f2c(double temp) {
	return (temp - 32) * 5 / 9;
}