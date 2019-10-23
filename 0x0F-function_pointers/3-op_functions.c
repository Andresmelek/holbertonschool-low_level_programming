#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - function that sums two values
 * @a: first integer
 * @b: second integer
 * Return: Returns the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that does the difference of two values
 * @a: first integer
 * @b: second integer
 * Return: Returns the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that does the product of two values
 * @a: first integer
 * @b: second integer
 * Return: Returns the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that does the division of two values
 * @a: first integer
 * @b: second integer
 * Return: Returns the division of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return(100);
	}
	return (a / b);
}
/**
 * op_mod - function that does the reminder of two values
 * @a: first integer
 * @b: second integer
 * Return: Returns the reminder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return(100);
	}
	return (a % b);
}
