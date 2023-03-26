#!/bin/bash
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_memcpy - Write a function that copies memory area.
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes to be copied
 * Return: dest, with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int e = 0;
	int m = n;

	for (; e < m; e++)
	{
		dest[e] = src[e];
		n--;
	}
	return (dest);
}

