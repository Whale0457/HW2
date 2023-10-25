#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 0, j = 0, k = 0;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 10; i > 0; i--)
	{
		for (j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 10; i > 0; i--)
	{
		for (k = 0; k < 10 - i; k++)
		{
			printf(" ");
		}
		for (j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i <= 10; i++)
	{
		for (k = 0; k < 10 - i; k++)
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