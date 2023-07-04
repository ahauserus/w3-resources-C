#include <stdio.h>

/**
 * main - displays a pattern like a pyramid.
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
                                printf("%d ", i);
                }

                printf("\n");
        }
        return (0);
}
