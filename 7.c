#include <stdio.h>

/**
 * multiplier - Displays the multiplier table vertically for a given integer
 * @n: Integer limit
 *
 * Return: 0 is success, 1 otherwise
 */

void multiplier(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			if ((j == i) && (i == n && j == n))
				printf("%d x %d = %d", i, j, i * j);
			else
				printf("%d x %d = %d, ", i, j, i * j);
	}

	putchar(10);
}

/**
 * main - Checks the code
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	multiplier(10);

	return (0);
}
