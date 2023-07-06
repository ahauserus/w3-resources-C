
#include <stdio.h>

/**
 * main - checks whether a given number is a 'Perfect' number or not
 *
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int i, num, sum = 0;

	num = 28;

	printf("The divisors of %d are:\n", num);

	for (i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d ", i);
			sum += i;
		}
	}
	putchar('\n');

	printf("The sum of the divisors of %d is %d\n", num, sum);

	if (sum == num)
		printf("%d is a perfect number\n", num);
	else
		printf("%d is not a perfect number\n", num);

	return (0);
}
