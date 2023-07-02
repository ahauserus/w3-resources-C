#include <stdio.h>

/**
 * main - Prints a Pyramid with numbers increase by 1.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;
	int number = 1;
	int spaces;

	for (i = 1; i <= 4; i++)
	{
		for (spaces = 1; spaces <= 4 - i; spaces++)
			printf(" ");

		for (j = 1; j <= i; j++)
		{
			printf("%d ", number);
			number++;
		}

		printf("\n");

	}

	return (0);
}
