#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int worker = 0;
	float wpay = 0, hpay = 0, sales = 0, pay = 0;
	float hour = 0, piece = 0;
	printf("輸入擔任何種員工(經理為1，計時工為2，佣金工為3，計件工為4):");
	scanf("%d", &worker);
	switch (worker)
	{
	case 1:
		printf("輸入每周薪資:");
		scanf("%f", &wpay);
		printf("薪水=%.2f", wpay);
		break;
	case 2:
		printf("輸入時薪:");
		scanf("%f", &hpay);
		printf("輸入工作時長:");
		scanf("%f", &hour);
		if (hour <= 40) printf("薪水=%.2f", hpay*hour);
		else printf("薪水=%.2f", 40 * hpay + (hour - 40)*1.5*hpay);
		break;
	case 3:
		printf("輸入一周銷售額:");
		scanf("%f", &sales);
		printf("薪水=%.2f", sales*0.057 + 250);
		break;
	case 4:
		printf("輸入一件商品的報酬:");
		scanf("%f", &pay);
		printf("輸入本周完成商品數:");
		scanf("%f", &piece);
		printf("薪水=%.2f", pay*piece);
		break;
	}
	return 0;
}