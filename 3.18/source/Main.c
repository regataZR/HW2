#include<stdio.h>
#include<stdlib.h>

float a, b;

int main(void)
{
	while (1)
	{
		printf("Enter sales in dollars (-1 to end)¡G");
		scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		else
		{
			b = 200 + a * 0.09;
			printf("\nSalary is¡G $ %.2f\n\n", b);
		}

	}

	system("pause");

	return 0;
}