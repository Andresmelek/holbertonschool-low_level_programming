#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - check the code for Holberton School students.
 *@argc: number of lines
 *@argv: value of the lines
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum, j;

	sum = 0;
	if (argc > 1)
	{
		{
		for (j = 0; argv[j] != '\0'; j++)
			{
				if (!(isdigit(argv[j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[j]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
