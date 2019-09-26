#include <stdio.h>
/**
 * main - check for the multiples of 3 and 5.
 *
 * Return: Fizz for multiples of 3, buzz 5 and fizzbuzz 3 y 5
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		printf("FizzBuzz ");
		else if (x % 3 == 0)
		printf("Fizz ");
		else if (x % 5 == 0)
		printf("Buzz ");
		else
		printf("%d ", x);
	}
	printf("\n");
	return (0);
}
