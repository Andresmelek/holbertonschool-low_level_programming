#include <stdio.h>
/*
 * mian - finds and prints the largest prime factor of 61285247514
 * Return: lowest prime factor
 */

int main(void)
{
	long y;
	long x = 612852475143;

	for (y = 2; x > y; y++)
	{
		while (n % y == 0)
		{
		  x = x / y;
		}
	}
	printf("%ld\n", y);
	return (0);
}
