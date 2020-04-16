#include "search_algos.h"
/**
 * binary_search - that searches for a value in an array
 * of integers using the bynary search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return:  the first index where value is located
 * or -1  if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, half = 0, l, r;

	l = 0;
	r = size - 1;
	if (array == NULL)
		return (-1);

	while  (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
			{
				printf("%d", array[i]);
				break;
			}
			printf("%d, ", array[i]);
		}
		printf("\n");

		half = (l + r) / 2;

		if (array[half] == value)
			return (half);

		else if (array[half] < value)
			l = half + 1;

		else if (array[half] > value)
			r = half - 1;
	}
	return (-1);

}
