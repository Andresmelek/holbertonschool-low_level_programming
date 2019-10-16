#include "holberton.h"

#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - copies the arguments of all arguments to single string
 * @ac: count of arguments
 * @av: pointer to strings
 * Return:  pointer to the array, null if the memory allocation fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *s1, *s2;

	if (ac == 0 || *av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	len++;
	}
	len += 1;

	s1 = malloc(sizeof(char) * len);
	s2 = s1;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*s1 = av[i][j];
			s1++;
		}
	*s1 = '\n';
	s1++;
	}
return (s2);
}
