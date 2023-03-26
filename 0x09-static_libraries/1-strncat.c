#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strncat - Write a function that concatenates two strings.
 * @dest: string to be linked
 * @src: string to be linked to dest
 * @n: number of n bytes from src to be linked in a series
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int e;
	int m;


	e = 0;
	while (dest[e] != '\0')
	{
		e++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
	dest[e] = src[m];
	e++;
	m++;
	}
	dest[e] = '\0';
	return (dest);
}
