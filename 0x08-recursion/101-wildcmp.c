#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * wildcmp - Write a function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 * @s1: string 1
 * @s2: string 2, a* can be contained as a special character
 * Return: if they are identical, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) ||  wildcmp(s1 + 1, s2));
	return (0);
}
