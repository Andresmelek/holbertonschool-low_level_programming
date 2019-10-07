#include "holberton.h"
/**
 * *_strchr - Write a function that locates a character in a string..
 * @s: string
 * @c: ocurrence
 * Return: a pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{

	while (*s != c)
		if (!*s++)
		{
		return (0);
		}
		return (s);
}
