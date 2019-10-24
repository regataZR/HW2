#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	printf("Enter your core¡G");
	scanf_s("%d", &a);

	if (a == 1)
	{

	}
	else if (a == 2)
	{
		float b, c, d;
		printf("Enter # of hours worked (-1 to end)¡G");
		scanf_s("%f", &b);
		printf("Enter hourly rate of the work ($00.00)¡G");
		scanf_s("%f", &c);
		if (b > 40)
		{
			d = (b - 40)*1.5*c + 40 * c;
		}
		else
		{
			d = b * c;
		}
		printf("Salary is %.2f\n", d);
	}
	else if (a == 3)
	{
		float b, c;
		printf("Enter sales in dollars (-1 to end)¡G");
		scanf_s("%f", &b);
		c = 250 + b * 0.057;
		printf("\nSalary is¡G $ %.2f\n\n", c);
	}
	else
	{

	}





	system("pause");

	return 0;
}