#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * The numbers should be separated by comma, followed by a space ,
 * Return: Always 0
 */
int main(void)
{
	int s = 0, t = 1, next = 0;
	int n = 0;

	while (next < 4000000)
	{
		next = s + t;
		s = t;
		t = next;
		if (next % 2 == 0)
			n += next;
	}
	printf("%i\n", n);
	return (0);
}
