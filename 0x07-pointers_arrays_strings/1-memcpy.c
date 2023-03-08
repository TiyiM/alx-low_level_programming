#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - Write a function that copies memory area.
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 * Return: nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int e;

	e = 0;

	while (e < size)
	{
		if (e % 10)
		{
			printf(" ");
		}
		if (!(e % 10) && e)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[e]);
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
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("-------------------------------------------------\n");
	simple_print_buffer(buffer, 98);
	return (0);
}
