#include <stdio.h>
/*
 * mian - finds and prints the largest prime factor of 61285247514
 * Return: lowest prime factor
 */
int main(void)
{
  long  int x;
  long y = 61285247514;
  

  for(x = 2; x < y; x++)
    {
      while (y % x == 0)
	{
	  y = (y / x);
	}
    }
  printf("%ld\n", x);
  return (0);
}
