#include <stdio.h>

/**
 * main -  display the multiplication table for a given intege
 *
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int i, n = 15;

	for (i = 1; i <= 10; i++)
		printf("%d x %d = %d\n", n, i, n * i);

	return (0);
}
