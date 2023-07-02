#include <stdio.h>

/**
 * main - Finds the cube of numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		printf("%d cubed is: %d \n", n, n * n * n);
	}

	return (0);
}
