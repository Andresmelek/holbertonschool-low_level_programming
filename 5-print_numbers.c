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
	int numb;

	numb = 48;

	while (numb <= 57)
	{
	putchar(numb);
	numb++;
	}
	putchar('\n');
	return (0);
}
