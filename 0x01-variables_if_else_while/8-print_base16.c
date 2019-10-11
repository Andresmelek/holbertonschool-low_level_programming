#include <stdio.h>
/**
 * main - Hexocecimal numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char ltr;

	for (num = 48; num <= 57; num++)
	{
	putchar(num);
	}
	for (ltr = 'a'; ltr <= 'f'; ltr++)
	{
	putchar(ltr);
	}
	putchar('\n');
	return (0);
}
