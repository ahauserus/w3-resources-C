#include <stdio.h>

/**
 * main - Computes the sum of a given series
 *
 *
 * Return: 0.
 */

int main(void)
{
	int i, size;
	long int num = 9;
	long int sum = 0;

	size = 15;

	for (i = 1; i <= size; i++)
	{
		printf("%ld ", num);
		sum += num;
		num = num * 10 + 9;
	}
	printf("\nThe sum of the series = %ld\n", sum);

	return (0);
}
