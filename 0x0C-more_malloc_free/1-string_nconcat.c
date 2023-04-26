#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - Write a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 * Return: pointer to the allocated memory; if molloc fails
 * status  value equals 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *evie;
	unsigned int ls1, ls2, levie, e;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if  (n > ls2)
		n = ls2;

	levie = ls1 + n;

	evie = malloc(levie + 1);

	if (evie == NULL)
		return (NULL);

	for (e = 0; e < levie; e++)
		if (e < ls1)
			evie[e]  = s1[e];

		else
			evie[e] = s2[e - ls1];

	evie[e] = '\0';

	return (evie);
}
