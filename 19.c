#include <stdio.h>

/**
 * main - Computes the sum of a given series
 *
 *
 * Return: 0.
 */

int main(void)
{
	int i;
	int num = 9;
	int sum = 0;

	for (i = 1; i <= 5; i++)
	{
		printf("%d ", num);
		sum = sum + num;
		num = num * 10 + 9;
	}
	printf("\nThe sum of the series = %d\n", sum);

	return (0);
}
