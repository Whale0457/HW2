#include <stdio.h>
#include <stdlib.h>
int main()
{
	int l = 0, w = 0;
	int i = 0, j = 0;
	printf("Enter the length:");
	scanf("%d", &l);
	printf("Enter the width:");
	scanf("%d", &w);
	for (i = 1; i <= l; i++)
	{
		for (j = 1; j <= w; j++)
		{
			
			if (i == 1 || i == l || j == 1 || j == w)
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}