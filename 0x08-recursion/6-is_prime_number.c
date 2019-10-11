#include "holberton.h"
/**
 * checkprime - funciton that chechs the prime
 *
 *
 *
 */
int checkprime(int i, int j)
{
	j = i / 2;
	if (i % j == 0)
	{
		return (1);
	}
	else
	{
		return (checkrpime(i, j + 1);
	}
}
/**
 * is_prime_number - 
 *
 *
 *
 *
 */
int is_prime_number(int n)
{
	if (n == 1 || n < 0)
	{
		return (0);
	}
	else
	{
		return (checkprime(n, 1));
	}
}
