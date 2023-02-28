#include "main.h"
#include <stdio.h>

/**
 * _atoi - Write a function that convert a string to an integer.
 * @dest
 * @s: input
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int p = 0;
	int t = 0;
	int evie = 1;

	while ((s[p] < '0' || s[p] > '9') && s[p] != 0)
	{
		if (s[p] == '-')
			evie *= -1;
		p++;
	}
	while ((s[p] >= '0' && s[p] <= '9') && s[p] != 0)
	{
		if (t >= 0)
		{
			t = t * 10 - (s[p] - '0');
			p++;
		}
		else
		{
			t = t * 10 - (s[p] - '0');
			p++;
		}
	}
	evie *= -1;
	return (t * evie);
}
