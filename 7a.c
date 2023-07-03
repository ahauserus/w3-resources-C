#include <stdio.h>

/**
 * main - displays the multiplication table
 *	for a given integer
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 15;
	int i;

	for (i = 0; i <= 10; i++)
	{
		printf("%d x %d = %d\n", n, i, i * n);
	}
	return (0);
}
