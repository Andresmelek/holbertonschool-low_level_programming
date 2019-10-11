#include <stdio.h>
/**
 * main - main block
 * Description: Print0_99.
 * Return: 0
 */
int main(void)
{
int one;
int two;
for (one = 48; one <= 57; one++)
{
for (two = 48; two <= 57; two++)
{
putchar(one);
putchar(two);
if (one == 57 && two == 57)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
