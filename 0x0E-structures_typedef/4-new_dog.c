#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Null if the functions fails and returns
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *newname, *newowner;
	int lenname, lenowner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	lenname = _strlen(name);
	lenowner = _strlen(owner);

	newname = malloc(sizeof(char) * lenname + 1);
		if (newname == NULL)
		{
			free(new_dog);
			return (NULL);
		}
	newname = _strcpy(newname, name);

	newowner = malloc(sizeof(char) * lenowner + 1);
		if (newowner == NULL)
		{
			free(newname);
			free(new_dog);
			return (NULL);
		}
	newowner = _strcpy(newowner, owner);

	(*new_dog).name = newname;
	(*new_dog).age = age;
	(*new_dog).owner = newowner;
	return (new_dog);
}

#include "dog.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: sting
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != 0)
	{
	s++;
	i++;
	}
	return (i);
}
#include "dog.h"
/**
 * *_strcpy - function that copies the string pointed to by src to dest.
 * @dest: destiny
 * @src: source
 * Return: Returns the value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
