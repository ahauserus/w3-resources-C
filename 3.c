#include <stdio.h>
/**
 * main - print the first n natural numbers and their sum 
 * Return: 0
 */
int main(void)
{
	int n = 100;
	int i, sum = 0;

	printf("The first %d natural number are: \n", n);
	for (i = 1; i <= n; i++)
	{
		printf("%d ", i);
		sum += i;
	}
	printf("\nThe sum of Natural Number upto %d terms: %d\n", n, sum);
	return (0);
}
