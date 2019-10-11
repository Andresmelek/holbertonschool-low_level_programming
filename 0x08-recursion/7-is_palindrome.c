#include "holberton.h"

/**
 * _strlen- find length of a string
 * @s: pointer to string to be counted
 * Return: return count
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * check - resolve palidrome
 * @str: pointer to string to be counted
 * @len: int type
 * Return: return palidrome
 */

int check(char *str, int len)
{
	if (len <= 0)
		return (1);
	if (str[0] == str[len - 1])
	{
		return (check(str + 1, len - 2));
	}
	else
		return (0);
}

/**
 * is_palindrome - check if palidrome
 * @s: pointer to string to be counted
 * Return: return 1 is palidrome 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
		return (1);
	else
		return (check(s, len));
}
