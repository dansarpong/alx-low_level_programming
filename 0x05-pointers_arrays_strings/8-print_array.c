#include "main.h"

/**
  * print_array - print n elements of an array of integers
  * @a: array of integers
  * @n: number of elements to print
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if ((i + 1) < n)
			printf(", ");
	}
	_putchar('\n');
}
