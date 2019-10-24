#include<stdio.h>
#include<stdlib.h>

float a, b, c, d;

int main(void)
{
	while (1)
	{
		printf("Enter loan principal (-1 to end)¡G");
		scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		else
		{
			printf("Enter interest rate¡G");
			scanf_s("%f", &b);
			printf("Enter term of the loan in day¡G");
			scanf_s("%f", &c);
			d = a * b*c / 365;
			printf("\nThe interest charge is¡G $ %.2f\n", d);
		}

	}

	system("pause");
	
	return 0;	
}