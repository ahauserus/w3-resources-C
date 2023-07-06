#include <stdio.h>

/**
 * main - displays a pattern like a pyramid, with each
 *	row containing an odd number of asteriks.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, j, space;

	for (i = 0; i <= 6; i++)
	{
		for (space = 0; space <= 5 - i; space++)
			printf(" ");

		for (j = 0; j <= 5 - space; j++)
		{
			if (i % 2 == 1)
				printf("* ");
		}

		printf("\n");
	}

	return (0);
}

