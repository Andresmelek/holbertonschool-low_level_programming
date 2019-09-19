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
	char num;

	for (num = 48; num <= 57; num++)
	{
	putchar(num);
	}
	putchar(",");
	putchar(" ");
	return (0);
}
