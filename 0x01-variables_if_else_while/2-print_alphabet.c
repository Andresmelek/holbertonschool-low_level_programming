#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ltr;

	ltr = 'a';
	while (ltr <= 'z')
	{
	putchar(ltr);
	ltr++;
	}
	putchar('\n');
	return (0);
}
