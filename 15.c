#include <stdio.h>

/**
 * factorial - calculate the factorial of a given number
 * @n: number
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}

/**
 * main - Checks the code
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int i = 5;
	int j = 10;
	int k = 15;

	printf("The Factorial of %d is %d\n", i, factorial(i));
	printf("The Factorial of %d is %d\n", j, factorial(j));
	printf("The Factorial of %d is %d\n", k, factorial(k));

	return (0);
}
