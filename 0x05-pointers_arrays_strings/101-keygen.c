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
	int pass[100];
	int p, sum, q;

	sum = 0;

	srand(time(100));

	for (p = 0; p < 100; p++)
	{
		pass[p] = rand() % 78;
		sum += (pass[p] + '0');
		putchar(pass[1] + '0');
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
