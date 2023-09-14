#include "main.h"

/**
  * print_triangle - print a triangle
  * @size: size of the triangle
  */

void print_triangle(int size)
{
	int len, space, fill;

	for (len = 1; len <= n; len++)
	{
		for (space = 0; space < len; space++)
		{
			_putchar(' ');
		}
		for (fill = len; fill <= len; fill++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
