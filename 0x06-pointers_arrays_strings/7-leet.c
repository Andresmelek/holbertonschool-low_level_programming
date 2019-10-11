#include "holberton.h"
/**
 * leet - function that encodes a string into 1337
 * @s:  string
 * Return: string encoded
 */
char *leet(char *s)
{
int i;
int j;
char words[] = "AaEeOoTtLl";
char num[] = "4433007711";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (s[i] == words[j])
			{
				s[i] = num[j];
			}
		}
	}
return (s);
}
