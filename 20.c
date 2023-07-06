#include <stdio.h>

/**
 *
 *
 *
 */
int main(void)
{

	int i;
	int odd = 1;
	int even = 0;
	int num = 1;

	for (i = 0; i < 5; i++) {
		if (num % 2 == 0){
			printf("%d ", even);

		}
		else {
			printf("%d ", odd);
	
		}
	num = 1 - num;
	}
	printf("\n");
	return (0);
}
