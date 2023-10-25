#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 0, j = 0, k = 0;

	for (i = 1; i <= 9; i += 2)
	{
		for (j = 0; j < 9 - i; j += 2)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 7; i >= 0; i -= 2)
	{
		for (j = 0; j <= 7 - i; j += 2)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}