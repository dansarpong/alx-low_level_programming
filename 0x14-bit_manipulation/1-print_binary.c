#include "main.h"

/**
  * print_binary - prints the binary of a number
  * @n: the number
  */
void print_binary(unsigned long int n)
{
	unsigned int res, mask = 1;

	while (mask < n)
		mask <<= 1;

	while (mask)
	{
		res = (mask & n) ? 1 : 0;
		_putchar(res + '0');
		mask >>= 1;
	}
}
