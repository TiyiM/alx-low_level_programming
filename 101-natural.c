#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point
 * Desciption: computes and prints the sum of all the multiples of 3
 * or 5 below 1024 (excluded), followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int e = 0;
	int sum = 0;

	while (e < 1024)
	{
		if (e % 3 == 0 || e % 5 == 0)
		{
			sum += e;
		}

		e++;
	}
	printf("%i\n", sum);
	return (0);
}
