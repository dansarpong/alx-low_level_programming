#include "main.h"

/**
  * puts_half - print last half of string
  * @str: string to print
  */
void puts_half(char *str)
{
	int l, n;

	for (l = 0; str[l] != '\0'; l++)
	{
	}
	if (l % 2 == 0)
		n = l / 2;
	else
		n = (l - 1) / 2;

	for (++n; n < l; n++)
		_putchar(str[n]);
	_putchar('\n');
}
