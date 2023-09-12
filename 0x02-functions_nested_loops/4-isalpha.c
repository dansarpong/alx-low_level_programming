#include "main.h"

/**
  * int _isalpha - check for alphabetic character
  * @c - letter being checked
  * Return: 1 if c is a letter, 0 if otherwise
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
