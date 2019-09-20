#include <stdio.h>
/**
 * main - combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;
for (digit = 48; digit <= 57; digit++)
{
putchar (digit);
if (digit != 57)
{
putchar (44);
putchar (' ');
}
}
putchar ('\n');
return (0);
}
