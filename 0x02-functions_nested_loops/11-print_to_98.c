#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: Natural number
 *
 *Return: Returns the trend untill 89
*/

void print_to_98(int n)
{
	while (n < 98)
		{
		printf("%d, ", n);
		n++;
		}
			while (n > 98)
			{
			printf("%d, ", n);
			n--;
			}
			if (n == 98)
			{
			printf("%d\n", n);
			}
}

