#include <stdio.h>

/**
 * main - display the first 10 natural numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 1;

	do {
		printf("%d ", i);
		i++;
	} while (i <= 10);

	putchar(10);

	return (0);
}
