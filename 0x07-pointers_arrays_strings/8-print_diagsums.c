#include "holberton.h"
<<<<<<< HEAD
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals .
=======
#include "stdio.h"

/**
 * print_diagsums- sum of diagonal
 * @a: pointer int type array
 * @size: int type
 * Return: sum of two diagonals
>>>>>>> 58e4d1ec90386449b6f3807773991f865a89532c
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

<<<<<<< HEAD
	 sum1 = 0;
	 sum2 = 0;
	for (i = 0; i < size; i++)
	sum1 = a[(size + 1 * i)];
	for (j = 0; j < size; j++)
	sum2 = a[(size - 1 * j - 1)];
	{
	printf("%d, %d\n", sum1, sum2);
	}
=======
	sum1 = 0;
	sum2 = 0;

	for (i = 0;  i < size; i++)
		sum1 += a[(size + 1) * i];
	for (j =  0; j < size; j++)
		sum2 += a[(size - 1) * (j + 1)];
	printf("%d, %d\n",  sum1, sum2);
>>>>>>> 58e4d1ec90386449b6f3807773991f865a89532c
}
