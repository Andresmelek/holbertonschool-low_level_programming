#include <stdio.h>
#include "holberton.h"
/**
 * print_array - function that prints n elements of an array of integers.
 * @n: integer
 * @a: pointer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n + 1))
			printf("%d\n", a[i]);
		else
		printf("%d, ", a[i]);
	}
}
