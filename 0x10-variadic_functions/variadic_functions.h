#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct op - Options
 * @form: format
 * @f: New functions
 *
 * Description: Functions
 */
typedef struct op
		{
			char form;
			void (*f)(va_list);
		} op_t;

#endif
