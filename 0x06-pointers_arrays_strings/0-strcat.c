#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strcat - Write a function that concatenates two strings.
 * @dest: Returns a pointer to the resulting string dest
 * @src: links the src string to the dest string, overwriting the terminating
 * null byte (\0) at the end of dest, and then adds a terminating null byte
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int e = -1, p;

	for (p = 0; dest[p] != '\0'; p++)

	do
	{
		e++;
		dest[p] = src[e];
		p++;
	}
	while (src[e] != '\0');
	return (dest);
}
