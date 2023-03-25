#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - Write a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer to the allocated memory; if nmemb or size is 0, returns NULL
 * if malloc fails, returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int e;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);

	if (m == NULL)
		return (NULL);

	for (e = 0; e < (nmemb * size); e++)
		m[e] = 0;

	return (m);
}
