#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of elements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
	p = va_arg(list, char *);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
