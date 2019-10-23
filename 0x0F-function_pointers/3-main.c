#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that operates two numbers
 * @argc: Number of elements
 * @argv: value of elements
 * Return: Operation of elements
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", calc);
	return (0);
}
