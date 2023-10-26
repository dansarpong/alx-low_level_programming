#include "main.h"

/**
  * get_bit - get bit at a given index
  * @n: the number
  * @index: the index
  * Return: the value of the bit at that index, -1 if error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	index = 1 << index;

	if (index > n)
		return (-1);

	return ((n & index) ? 1 : 0);
}
