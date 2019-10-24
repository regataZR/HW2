#include<stdio.h>
#include<stdlib.h>

float  b, c, d, e,f;
int a;
int main(void)
{
	while (1)
	{
		printf("Enter account number(-1 to end)¡G");
		scanf_s("%d", &a);
		if (a == -1)
		{
			break;
		}
		else
		{
			printf("Enter begining balance¡G");
			scanf_s("%f", &b);
			printf("Enter total charges¡G");
			scanf_s("%f", &c);
			printf("Enter total credit¡G");
			scanf_s("%f", &d);
			printf("Enter credit limit¡G");
			scanf_s("%f", &e);

			f = b + c - d;


			if (f > e)
			{			
				printf("Account:\t%d \n", a);
				printf("Credit limit:\t%.2f \n", b);
				printf("Balance:\t%.2f \n", f);
				printf("Credit Limit Exceeded\n");
			}
			else
			{
				printf("\n");
			}
		
		}
	}



	

	
	

	system("pause");
	return 0;

}