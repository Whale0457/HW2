#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int worker = 0;
	float wpay = 0, hpay = 0, sales = 0, pay = 0;
	float hour = 0, piece = 0;
	printf("��J�����ح��u(�g�z��1�A�p�ɤu��2�A�����u��3�A�p��u��4):");
	scanf("%d", &worker);
	switch (worker)
	{
	case 1:
		printf("��J�C�P�~��:");
		scanf("%f", &wpay);
		printf("�~��=%.2f", wpay);
		break;
	case 2:
		printf("��J���~:");
		scanf("%f", &hpay);
		printf("��J�u�@�ɪ�:");
		scanf("%f", &hour);
		if (hour <= 40) printf("�~��=%.2f", hpay*hour);
		else printf("�~��=%.2f", 40 * hpay + (hour - 40)*1.5*hpay);
		break;
	case 3:
		printf("��J�@�P�P���B:");
		scanf("%f", &sales);
		printf("�~��=%.2f", sales*0.057 + 250);
		break;
	case 4:
		printf("��J�@��ӫ~�����S:");
		scanf("%f", &pay);
		printf("��J���P�����ӫ~��:");
		scanf("%f", &piece);
		printf("�~��=%.2f", pay*piece);
		break;
	}
	return 0;
}