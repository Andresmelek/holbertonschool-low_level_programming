#include "holberton.h"
/**
 * *leet - Write a function that encodes a string into 1337
 * @s: string
 * Return: String
 */
char *leet(char *s)
{
	int i, j;
	char word[] = "AEOTLaeotl";
	char num[] = "4307143701";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j < 10; j++)
		{
		if (s[i] == word[j])
		{
			s[i] = num[j];
			break;
		}
	}
	}
	return (s);
}
