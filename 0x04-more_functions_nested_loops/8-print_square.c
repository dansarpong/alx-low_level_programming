#include "main.h"

/**
  * print_square - print a square
  * @size: size of the square
  */

void print_square(int size)
{
	int l, b;

	for (l = 1; l <= size; l++)
	{
		for (b = 1; b <= size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
