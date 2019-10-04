#include "holberton.h"

/**
 * rot13 - caesers cipher
 * @s: pointer to an array of words
 *
 * Return: s
 */

char *rot13(char *s)
{
	int a, b;

	char inp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; inp[b] != '\0'; b++)
		{
			if (s[a] == inp[b])
			{
				s[a] = out[b];
				break;
			}
		}
	}
	return (s);
}
