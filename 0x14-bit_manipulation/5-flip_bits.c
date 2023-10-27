#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int res = n ^ m, bits = 0;

	while (res != 0)
	{
		bits += res & 1;
		res >>= 1;
	}

	return (bits);
}
