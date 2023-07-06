#include <stdio.h>

/**
 * main - Prints a Floyd Triangle with 0s and 1s
 *
 * Return: Always 0 (success), 1 otherwise
 */

int main(void)
{
	int i, j, size;

	size = 100;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if ((i + j) % 2 == 0)
				printf("%d ", 1);
			else
				printf("%d ", 0);
		}
		printf("\n");
	}

	return (0);
}
