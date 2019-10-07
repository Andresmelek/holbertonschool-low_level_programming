#include "holberton.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: first string
 * @needle: second string
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != *needle)
	{
		if (!*haystack++)
		return (0);
	}
	return (haystack);
}
