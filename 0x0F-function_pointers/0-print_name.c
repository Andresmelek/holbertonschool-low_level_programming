#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name -function that prints a name
 * @name: name of the person
 * @f: function that has a char as parameter
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(f)(name);
}
