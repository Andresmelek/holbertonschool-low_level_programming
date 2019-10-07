#include "holberton.h"
/**
 * reverse_array - function that reverses an array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0, n_array;

	n = n - 1;
	while (i < n)
	{
		n_array = a[i];
		a[i] = a[n];
		a[n] = n_array;
		n--;
		i++;
	}
}
