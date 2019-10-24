#include<stdio.h>
#include<stdlib.h>

float a, b, c;

int main(void)
{
	while (1)
	{
		printf("Enter # of hours worked (-1 to end)¡G");
		scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		else
		{
			printf("Enter hourly rate of the work ($00.00)¡G");
			scanf_s("%f", &b);
			if (a > 40)
			{
				c = (a - 40)*1.5*b + 40 * b;
			}
			else
			{
				c = a * b;
			}
			printf("Salary is %.2f\n", c);
		}
		
	}

	system("pause");

	return 0;
}