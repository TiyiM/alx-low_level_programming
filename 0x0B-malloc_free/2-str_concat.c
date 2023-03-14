#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Write a function that concatenates two strings.
 * @s1: string to concatenates
 * @s2: other string to concatenates
 * Return: pointer to the new string created (success), NULL (error)
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int e = 0, m = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2));

	if (s3 == NULL)
		return (NULL);

	e = 0;
	m = 0;

	if (s1)
	{
		while (e < len1)
		{
			s3[e] = s1[e];
			e++;
		}
	}

	if (s2)
	{
		while (e < (len1 + len2))
		{
			s3[e] = s2[m];
			e++;
			m++;
		}
	}
	s3[e] = '\0';

	return (s3);
}
