#include <stdarg.h>
#include  "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", va_arg(list, int));
		else
			printf("%d%s", va_arg(list, int), separator);
	}
	va_end(list);
	printf("\n");
}
