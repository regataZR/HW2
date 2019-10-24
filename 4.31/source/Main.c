#include<stdio.h>
#include<stdlib.h>

#define WIDTH 9

int main(void)
{
	int space = WIDTH / 2;
	for (int i = 0;i < WIDTH; i++)
	{
		for (int j = 0;j < abs(space-i); j++)
			printf("o");
		for (int j = 0; j < 2*(space -abs(space - i)); j++)
			printf("*");
		printf("*\n");
	}

	system("pause");

	return 0;

}