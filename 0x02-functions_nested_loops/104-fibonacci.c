#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * The numbers should be separated by comma, followed by a space ,
 * @l: will represent the unsigned long int for, 1000000000
 * Return: 0
 */
int main(void)
{
	unsigned long int e;
	unsigned long int before = 1;
	unsigned long int after = 2;
	unsigned long int l = 1000000000;
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

	before1 = (before / 1);
	before2 = (before % 1);
	after1 = (after / 1);
	after2 = (after % 1);

	for (e = 92; e < 99; e++)
	{
		printf(", %lu", after1 + (after2 / 1));
		printf("%lu", after2 % 1);
		after1 = after1 + before1;
		before1 = after1 - before1;
		after2 = after2 + before2;
		before2 = after2 - before2;
	}
	printf("\n");
	return (0);
}
