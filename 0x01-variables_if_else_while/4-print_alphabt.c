#include <stdio.h>
/**
 * main - exeptletters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int alphabet = 'a';
while (alphabet <= 'z')
{
if (alphabet == 'q' || alphabet == 'e')
{
alphabet++;
}
putchar (alphabet);
alphabet++;
}
putchar ('\n');
return (0);
}
