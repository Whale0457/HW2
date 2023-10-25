#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int account = 0;
	float balance = 0, bbalance = 0, charge = 0, credit = 0, creditlimit = 0;
	while (account >= 0)
	{
		printf("Enter account number(-1 to end):");
		scanf("%d", &account);
		if (account < 0) break;
		printf("Enter beginning balance:");
		scanf("%f", &bbalance);
		printf("Enter total charges:");
		scanf("%f", &charge);
		printf("Enter total credits:");
		scanf("%f", &credit);
		printf("Enter credit limit:");
		scanf("%f", &creditlimit);

		balance = bbalance + charge - credit;
		printf("Account:%d\n", account);
		printf("Credit limit:%.2f\n", creditlimit);
		printf("Balance:%.2f\n", balance);
		if (balance > creditlimit) printf("Credit limit Exceeded.\n");
	}
	return 0;
}