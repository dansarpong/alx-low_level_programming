#include "main.h"

/**
  * print_rev - print a string in reverse
  * @s: string to print
  */
void print_rev(char *s)
{
	int l;

	for (l = _strlen(*s); l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
