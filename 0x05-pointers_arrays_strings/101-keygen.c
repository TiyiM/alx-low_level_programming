#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Create a program that generates random valid
 * passwords for the program 101-crackme.
 * Return: Always 0
 */
int main(void)
{
	int p, sum, q;
	int pass[100];

	sum = 0;

	srand(time(NULL));

	for (p = 0; p < 100; p++)
	{
		pass[p] = rand() % 78;
		sum += (pass[p] + '0');
		putchar(pass[p] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			q = 2772 - sum - '0';
			sum += q;
			putchar(q + '0');
			break;
		}
	}

	return (0);
}
