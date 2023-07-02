#include <stdio.h>

/**
 * main - computes the sum of the first 10
 *	natural numbers
 *
 * Return: 0.
 */
int main(void)

{

	int a;

	int sum = 0;

	for (a = 1; a <= 10; a++)

	{
		sum += a;
	}

	printf("The sum is: %d\n", sum);

	return (0);
}
