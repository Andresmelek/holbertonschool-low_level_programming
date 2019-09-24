#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
/* The local variable is set to be 0 */
	i = 0;
/* The loops says to go while i is less than 0 */
	while (i < 10)
/* So i will always less than 0 */
	putchar(i);
	}
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
