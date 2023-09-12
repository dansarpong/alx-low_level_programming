#include "main.h"

/**
  * print_alphabet_x10 - print the alphabets 10x, lowercase
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	char c;
	int t = 10;

	while (t > 0)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		t--;
	}
}
