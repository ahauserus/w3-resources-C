#include <stdio.h>
/**
 * main - program that finds the sum and average of first 10 numbers
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	float sum = 0;
	int i;
	float average = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
	}
	average = sum / 10;
	printf("sum %.f\n", sum);
	printf("average %.2f\n", average);

	return (0);
}

