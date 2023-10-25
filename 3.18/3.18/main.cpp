#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float sales = 0;
	float salary = 0;
	while (sales >= 0)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf("%f", &sales);
		if (sales < 0) break;
		salary = 200 + sales * 0.09;
		printf("Salary is $%.2f:\n", salary);
	}
	return 0;
}