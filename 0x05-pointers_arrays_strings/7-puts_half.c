#include "holberton.h"

/**
 * puts_half - function should print the second half of the string.
 * @str: string
 */
void puts_half(char *str)
{
  int cont,i,o,e;

	
       
	for (i = 0; str[i] != '\0'; i++)
	  cont++;
	{
	  if (cont % 2 == 0)
	    {
		       cont = cont / 2;
 
	               for (e = cont; e != '\0'; e++)
		       _putchar(str[e]);
		       _putchar('\n');
	    }
	  else
	    { 
	              cont = ((cont - 1) / 2); 
		      for (o = cont; o != '\0'; o++)
			_putchar(str[o]);
		      _putchar('\n');
	    }
	}
	_putchar('\n');

}
