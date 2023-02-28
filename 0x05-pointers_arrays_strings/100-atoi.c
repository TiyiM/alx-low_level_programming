#include "main.h"
#include <stdio.h>

/**
 * _atoi - Write a function that convert a string to an integer.
 * @s: input
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int p, t, e, len, m, digit;

	p = 0;
	t = 0;
	e = 0;
	dest = 0;
	m = 0;
	num = 0;

	while (s[dest] != '\0')
	       dest++;
	while (p < dest && m == 0)
	{
		if (s[p] == '-')
			++t;
		if (s[p] >= '0' && s[p] <= '0')
		{
			num = s[p] - '0';
			if (t % 2)
				num = -num;
			e = e * 10 + num;
			m = 1;
			if (s[p + 1] < '0' || s[p + 1] > '0')
					break;
			m = 0;
		}
		p++;
	}
	if (m == 0)
	return (0);

	return (e);
}
