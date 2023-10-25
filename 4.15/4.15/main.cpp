#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	float fv1 = 0,fv2,fv3,fv4,fv5;
	fv1 = 5000;
	fv2 = 5000;
	fv3 = 5000;
	fv4 = 5000;
	fv5 = 5000;
	for (i = 1; i <= 15; i++)
	{
		fv1 = fv1 * 1.1;
	}
	printf("rate is 10%% ,fv=%.2f\n", fv1);

	for (i = 1; i <= 15; i++)
	{
		fv2 = fv2 * 1.105;
	}
	printf("rate is 10.5%% ,fv=%.2f\n", fv2);

	for (i = 1; i <= 15; i++)
	{
		fv3 = fv3 * 1.11;
	}
	printf("rate is 11%% ,fv=%.2f\n", fv3);

	for (i = 1; i <= 15; i++)
	{
		fv4 = fv4 * 1.115;
	}
	printf("rate is 11.5%% ,fv=%.2f\n", fv4);

	for (i = 1; i <= 15; i++)
	{
		fv5 = fv5 * 1.12;
	}
	printf("rate is 12%% ,fv=%.2f\n", fv5);
	return 0;
}