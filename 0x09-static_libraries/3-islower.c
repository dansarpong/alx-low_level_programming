#include "main.h"

/**
  * _islower - check for lowercase
  * @c: letter being tested
  * Return: 1 if is lowercase, 0 if otherwise
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
