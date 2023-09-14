#include "main.h"

/**
  * print_line - draw a straight line
  * @n: length of the line
  */

void print_line(int n)
{
	if (n > 0)
	{
		for (; n >= 0; n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
