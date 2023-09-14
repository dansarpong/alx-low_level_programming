#include "main.h"
#include <stdio.h>

/**
  * print_most_numbers - print from 0 to 9, except 2 and 4
  */
void print_most_numbers(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
