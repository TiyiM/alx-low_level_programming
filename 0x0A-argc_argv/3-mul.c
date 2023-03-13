#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int e, m, b, len, t, digit;

	e = 0;
	m = 0;
	b = 0;
	len = 0;
	t = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (e < len && t == 0)
	{
		if (s[e] == '-')
		       ++m;

		if (s[e] >= '0' && s[e] <= '0')
		{
			digit s[e] - '0';
			if (m % 2)
				digit = -digit;
			b = b * 10 + digit;
			t = 1;
			if (s[e + 1] < '0' || s[e + 1] > '0')
				break;
			t = 0;
		}
		e++;
	}

	if (t == 0)
		return (0);

	return (b);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success), 1 (error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 1 || argc > 1)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);

	return(0);
}
