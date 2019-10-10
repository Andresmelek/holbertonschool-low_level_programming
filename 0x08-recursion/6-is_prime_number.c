#include "holberton.h"
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
}
