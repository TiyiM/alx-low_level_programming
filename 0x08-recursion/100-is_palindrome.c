#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _length - checks length of the string
 * @s: string
 * Return: length of the string
 */

int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * evie - checks if the string is palindrome
 * @e: index
 * @m: length of the string
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int evie(int e, int m, char *s)
{
	if (m > 0)
	{
		if (s[e] == s[m])
		{
			return (evie(e + 1, m - 1, s));
		}
		else if (s[e] != s[m])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - Write a function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	return (evie(0, _length(s) - 1, s));
}
