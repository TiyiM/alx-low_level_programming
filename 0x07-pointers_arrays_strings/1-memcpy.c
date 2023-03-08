#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_memcpy - Write a function that copies memory area.
 * @dest: the address of memory to copy
 * @src: the size of the memory to copy
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int e;

	e = 0;

	while (e < src)
	{
		if (e % 10)
		{
			printf(" ");
		}
		if (!(e % 10) && e)
		{
			printf("\n");
		}
		printf("0x%02x", dest[e]);
		e++;
	}
	printf("\n");
}
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char dest[98] = {0x00};

	*_memcpy(dest, 98);
	_memcpy(buffer, 0x01, 95);
	printf("-------------------------------------------------\n");
	*_memcpy(dest, 98);
	return (0);
}
