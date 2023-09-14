#include "main.h"

/**
  * print_diagonal - draw a diagonal line
  * @n: number of times to draw diagonal
  */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = i; j > 0; j--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
