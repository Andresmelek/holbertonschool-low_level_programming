#include <stdio.h>
#include <stdarg.h>
typedef struct op
{
	char form;
	void (*f)(va_list);
} op_t;
/**
 * char_f - function that prints a char
 * @list: list of functions
 */
void char_f(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * int_f - function that prints an int
 * @list: list of functions
 */
void int_f(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * float_f - function that prints a float
 * @list: list of functions
 */
void float_f(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * str_f - function that prints a string
 * @list: list of functions
 */
void str_f(va_list list)
{
	char *p;

	p = va_arg(list, char *);
	if (p == NULL)
	{
		p = "(nil)";
	}
	printf("%s", p);
}

/**
 * print_all - function that prints anything
 * @format: constant string
 *
 */
void print_all(const char * const format, ...)
{
		op_t new[] = {
				{'c', char_f},
				{'i', int_f},
				{'f', float_f},
				{'s', str_f},
			};

	int i = 0, j;
	char *spc = "";
	va_list list;

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
		if (new[j].form == format[i])
		{
			printf("%s", spc);
			new[j].f(list);
			spc = ", ";
		}
		j++;
		}
	i++;
	}
	printf("\n");
	va_end(list);
}
