#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function given
 * as parameter on each elemant of an array
 * @array: an array with elements
 * @size: size of the array
 * @action: pointer to the function action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t cont;

	if (size <= 0)
		return;
	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (cont = 0; cont < size; cont++)
	{
		action(array[cont]);
	}
}
