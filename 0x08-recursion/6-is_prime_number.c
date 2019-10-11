#include "holberton.h"
<<<<<<< HEAD
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
=======
int prime(int n, int i);
/**
 * is_prime_number - checks to see if number is prime
 * @n: integer
 * Return: 1 if is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));


}

/**
 * prime - find prime
 * @n: integer
 * @i: int increment
 * Return: 0, 1.
 */
int prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime(n, i + 1));
>>>>>>> d9c3e7e713a85c4b5fac52dff880382f4c0305bf
}
