#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at an index
  * @n: number
  * @index: index
  * Return: 1 if it worked, -1 if an error occured
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(n) * 8)
		return (-1);

	mask <<= index;
	*n |= mask;
	return (1);
}
