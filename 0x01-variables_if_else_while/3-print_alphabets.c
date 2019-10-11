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
	char low;
	char upper;

	low = 'a';
	upper = 'A';

	while (low <= 'z')
	{
	putchar(low);
	low++;
	}
	while (upper <= 'Z')
	{
	putchar(upper);
	upper++;
	}
	putchar('\n');
	return (0);
}
