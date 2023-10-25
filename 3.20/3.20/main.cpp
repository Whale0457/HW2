#include <stdio.h>
#include <stdlib.h>
int main()
{
	int hour = 0;
	float rate = 0;
	float salary = 0;
	while (hour >= 0)
	{
		printf("Enter # of hour and worked(-1 to end):");
		scanf("%d", &hour);
		if (hour < 0) break;
		printf("Enter hourly rate of the worker($00.00):");
		scanf("%f", &rate);
		if (hour <= 40)
		{
			salary = hour * rate;
		}
		else
		{
			salary = 40 * rate + (hour - 40)*1.5*rate;
		}
		printf("Salary is $%.2f:\n", salary);
	}
	return 0;
}