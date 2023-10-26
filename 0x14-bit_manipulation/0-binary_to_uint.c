#include "main.h"

/**
  * binary_to_uint - convert binary number to unsigned int
  * @b: string of 0s and 1s
  * Return: converted number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, res = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		res = (res << 1) + (b[i] - '0');
	}

	return (res);
}
