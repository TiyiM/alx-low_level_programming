#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * The numbers must be separated by comma, followed by a space ,
 * Return: Always 0
 */
int main(void)
{
	int e = 0;
	long int s = 0, t = 1, next;

		while (e < 50)
	{
		next = s + t;
		s = t;
		t = next;
		printf("%lu", next);

		if (e < 49)
		{
			printf(", ");
		}
		e++;
	}
	putchar('\n');
	return (0);
}
