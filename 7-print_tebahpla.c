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
	char back;

	back = 'z';
	while (back <= 'a')
	{
	putchar(back);
	back--;
	}
	putchar('\n');
	return (0);
}
