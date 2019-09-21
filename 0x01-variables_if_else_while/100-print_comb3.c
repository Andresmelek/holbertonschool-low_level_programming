#include <stdio.h>
/**
 * main - compiled
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int one;
int two;
for (one = 48; one <= 57; one++)
{
for (two = 48; two <= 57; two++)
{
if (one < two)
{
putchar (one);
putchar (two);
 if (one != 56 || two != 57)
{
putchar (',');
putchar (' ');
}
}
}
}
putchar ('\n');
return (0);
}
