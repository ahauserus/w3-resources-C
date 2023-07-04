#include <stdio.h>

/**
 * main - displays a pattern like a pyramid, with each
 *	row containing an odd number of asteriks.
 *
 * return: Always 0.
 */
int main(void)
{
    	int i;
    	int j;
    	int space;

    	for (i = 0; i <= 5; i++)
    	{

            	for (space = 0; space <= 5 - i; space++)
            	{
                    	printf(" ");
            	}

            	for (j = 0; j <= 5 - space; j++)
            	{
						if (i % 2 == 1)
                            	printf("* ");
            	}

            	printf("\n");
    	}
    	return (0);
}

