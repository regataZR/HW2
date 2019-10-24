#include<stdio.h>
#include<stdlib.h>

#define w 10

int main(void)
{
	printf("(A)\n");
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("*\n");
	}

	printf("\n(B)\n");
	for (int i = 0; i < w; i++) 
	{
		for (int j = 0; j < w - i-1; j++)
		{
			printf("*");
		}
		printf("*\n");
	}

	printf("\n(C)\n");
	for (int i = 0; i < w; i++)
	{
		for (int k = 0; k < i; k++) 
		{
			printf(" ");
		}
		for (int j = 0; j < w-i-1; j++)
		{
			printf("*");
		}
		printf("*\n");

	}

	printf("\n(D)\n");
	for (int i = 0; i < w; i++)
	{
		for (int k = 0; k < w - i - 1; k++)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("*\n");
	}

	system("pause");

	return 0;
}