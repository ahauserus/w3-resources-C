#include <stdio.h>

/**
 * main - Prints a Pyramid with asterisks
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;
	int spaces;
	/* char star; */

	for (i = 1; i <= 4; i++)
	{
		for (spaces = 1; spaces <= 4 - i; spaces++)
			printf(" ");

		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}

		printf("\n");

	}

	return (0);
}
