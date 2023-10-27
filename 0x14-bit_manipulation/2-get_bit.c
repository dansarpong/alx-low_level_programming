#
nclude "main.h"

/**
  * get_bit - get bit at a given index
  * @n: the number
  * @index: the index
  * Return: the value of the bit at that index, -1 if error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index >= sizeof(n) * 8)
		return (-1);

	bit <<= index;
	return ((n & bit) ? 1 : 0);
}
