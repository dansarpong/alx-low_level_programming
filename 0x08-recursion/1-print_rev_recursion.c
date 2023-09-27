#include "main.h"

/**
  * print_rev_recursion - print a string in reverse
  * @s: string
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_resursion(s+1);
	_putchar(*s);
}
