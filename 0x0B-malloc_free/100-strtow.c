#include <stdio.h>

int _length(char s1)
{
	int i, cont = 0;

	for (i = 0; s1[i] != '\0'; i++)
	if (str[i] != ' ')
	{
	alpha = 1;
	cont++;
	}
	cont += 1;
	return (cont)
}


#include "holberton.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * strtow - function that splits into words
 * @str: string
 * Return: Returns null if str = NULL or is empty
 * Returns a pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, alpha,cont = 0, cont1 = 0;
	char **s1;

	if (str == NULL || str == "")
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		if (str[i] != ' ')
	{
		alpha = 1;
	}
		if (str[i] == ' ' && alpha = 1) 
		cont++;
		alpha = 0;
	}

	*s1 = malloc(sizeof(char) * cont);
	if(str == NULL || str == "")
		return (NULL);

	for (i = 0;str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			alpha = 1
			cont1++;

	*s1 = malloc(sizeof(char) * cont1);
	if (str == NULL || str == "")
		return (NULL);

	for (j = 0; j >= 0; j++)
	{
		free(str[j]);
	}
	free(str);

		
