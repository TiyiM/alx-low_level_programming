#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *leet - Write a function that encodes a string into 1337.
 * @n: input
 * Return: value of n
 */
char *leet(char *n)
{
	int m, t;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; n[m] != '\0'; m++)
	{
		for (t = 0; t < 10; t++)
		{
			if (n[m] == s1[t])
			{
				n[m] = s2[t];
			}
		}
	}
	return (n);
}
