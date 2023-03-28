#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
