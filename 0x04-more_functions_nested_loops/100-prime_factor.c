#include <stdio.h>
 /**
  * main - finds and prints the largest prime factor of 61285247514
  * Return: The largest prime number
  */

int main(void)
{
	long x;
	long y = 612852475143;

	for (x = 2; y > x; x++)
	{
		while (y % x == 0)
		{
			y = y / x;
		}
	}
	printf("%ld\n", x);
	return (0);
}
