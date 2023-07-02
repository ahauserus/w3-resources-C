#include <stdio.h>

/**
 * main - Prints a right angle triangle with the number increased by 1.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;
	int number = 1;

	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", number);
			number++;
		}
		printf("\n");
	}

	return (0);
}
