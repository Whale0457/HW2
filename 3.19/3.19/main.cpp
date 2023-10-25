#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float principal = 0, rate = 0, interest = 0;
	int day = 0;
	while (principal >= 0)
	{
		printf("Enter laon principal:");
		scanf("%f", &principal);
		if (principal < 0) break;
		printf("Enter interest rate:");
		scanf("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf("%d", &day);
		interest = principal * rate*day / 365;
		printf("The interest charge is $%.2f\n", interest);
	}
	return 0;
}