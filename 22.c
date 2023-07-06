#include <stdio.h>

/**
 * main - Prints an inverted pyramid
 *
 * Return: Always 0
 */

int main(void)
{
	int size = 25;
	int rows, cols, i, space = 0;

	for (rows = 0; rows < size; rows++)
	{
		for (i = 0; i < space; i++)
			printf(" ");
		space++;

		for (cols = size - 1; cols >= rows ; cols--)
			printf("* ");

		printf("\n");
	}

	return (0);
}
