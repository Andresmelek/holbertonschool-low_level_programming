#include "holberton.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: first string
 * @needle: second string
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	while (*haystack)
	{
		a = haystack;
		b = needle;

		while (*haystack == *b)
		{
			haystack++;
			b++;
		}
		if (*b == '\0')
		{
			return (a);
		}
		haystack++;
	}
	return (0);
}
