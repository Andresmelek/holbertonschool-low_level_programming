#include <stdio.h>
/**
 * main - combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int a;
int b;
int c;
int d;

for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
for (c = 48; c <= 57; c++)
{
for (d = 48; d <= 57; d++)
{
if (a <= c && b < d)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
