#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int e = 0
	int sum = 0;

	while (e < 1024)
	{
		if (e % 3 == 0 || e % 5 == 0)
		{
			sum += e;
		}

		e++
	}
	printf("%i\n", sum);
	return (0);
}
