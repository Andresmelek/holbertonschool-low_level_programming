#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastn;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	lastn = n % 10;
	if (lastn > 5)
	{
	printf("Last digit of %d is and %d is greater than 5\n", n, lastn);
	}
	else if (lastn == 0)
	{
	printf("Las difit of %d is %d and is 0\n", n, lastn);
	}
	else if (lastn < 6 && 10)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
	}
	return (0);
}
