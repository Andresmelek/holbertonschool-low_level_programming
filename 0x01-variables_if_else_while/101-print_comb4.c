#include <stdio.h>
/**
 * main - combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int one;
int two;
int three;

for (one = 48; one <= 57; one++)
{
for (two = 48; two <= 57; two++)
{
for (three = 48; three <= 57; three++)
{
if (one < two && two < three)
{
putchar(one);
putchar(two);
putchar(three);
{
if (one != 55 || two != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
