#include <stdio.h>
	/**
	 * main - function that prints n natural numbers and their sum
	 *
	 * Return:(0)
	 */
	int main(void)
	{
		int i;
		int sum;

for (i = 1; i <= 10; i += 2)

{
	printf("%d ", i);
	sum += i;
}
printf("\nsum of odd numbers %d\n", sum);
		return (0);

}
