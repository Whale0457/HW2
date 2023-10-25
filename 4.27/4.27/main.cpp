#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, i, limit;
	limit = 500;
	printf("Pythagorean Triples\n");
	for (a = 1; a <= limit; a++)
	{
		for (b = a + 1; b <= limit; b++)
		{
			for (c = b + 1; c <= limit; c++)
			{
				if (a*a + b * b == c * c)
				{
					printf("%d\t%d\t%d\n", a, b, c);
				}
			}
		}
	}
	return 0;
}
