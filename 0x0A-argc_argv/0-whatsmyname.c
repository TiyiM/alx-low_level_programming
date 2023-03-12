#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: number of arguments to print
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
