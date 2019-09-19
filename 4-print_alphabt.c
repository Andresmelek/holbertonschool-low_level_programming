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
	char ahb;

	for (ahb = 'a'; ahb <= 'z'; ahb = ahb++)
	{
	if (ahb != 'q' && ahb != 'e')
	{
	putchar(ahb);
	}
	}
	putchar('\n');
	return (0);
}
