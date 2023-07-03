#include <stdio.h>
/**
 * main - display a pattern like a right angle triangle with a number
 * Return: 0
 */
int main(void)
{
	int n = 25;
	int i = 0;
	int j = 0;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	return (0);
}
