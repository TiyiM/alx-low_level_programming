#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - A program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * The numbers should be separated by comma, followed by a space ,
 * @U: will represent the unsigned long int for, 1000000000
 * Return: 0
 */
int main(void)
{
	unsigned long int e;
	unsigned long int before = 1;
	unsigned long int after = 2;
	unsigned long int U = 1000000000;
	unsigned long int before1;
	unsigned long int before2;
	unsigned long int after1;
	unsigned long int after2;

	printf("%lu", before);

	for (e = 1; e < 91; e++)
	{
		printf(", %lu", after);
		after += before;
		before = after - before;
	}

	before1 = (before / U);
	before2 = (before % U);
	after1 = (after / U);
	after2 = (after % U);

	for (e = 92; e < 99; e++)
	{
		printf(", %lu", after1 + (after2 / U));
		printf("%lu", after2 % U);
		after1 = after1 + before1;
		before1 = after1 - before1;
		after2 = after2 + before2;
		before2 = after2 - before2;
	}
	printf("\n");
	return (0);
}
