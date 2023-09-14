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
		for (space = len; space < size; space++)
		{
			_putchar(' ');
		}
		for (fill = 1; fill <= len; fill++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
