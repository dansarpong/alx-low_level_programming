#include "main.h"

/**
  * clear_bit - clears the value of a bit to 0 at an index
  * @n: number
  * @index: index
  * Return: 1 if it worked, -1 if an error occured
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(n) * 8)
		return (-1);

	mask = ~(1 << index);
	*n &= mask;
	return (1);
}
