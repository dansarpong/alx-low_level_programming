#include "main.h"

/**
  * print_rev - print a string in reverse
  * @s: string to print
  */
void print_rev(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
	}

	for (--l; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
