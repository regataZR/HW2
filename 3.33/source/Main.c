#include<stdio.h>
#include<stdlib.h>



int main(void)
{
	int length, breadth;
	printf("Enter the length¡G");
	scanf_s("%d", &length);
	printf("Enter the breadth¡G");
	scanf_s("%d", &breadth);

	for (int i = 0; i < length; i++)
	{
		if (i == 0 || i == length - 1)
		{
			for (int j = 0; j < breadth; j++)
			{
				printf("*");
			}
		}
		else
		{
			printf("*");
			for (int k = 0; k < breadth -2; k++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}