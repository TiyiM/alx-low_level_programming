#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return:0
 */

int main(int argc, char *argv[])
{
	int e;

	for (e = 0; e < argc; e++)
	{
		printf("%s\n", argv[e]);
	}

	return (0);
}
