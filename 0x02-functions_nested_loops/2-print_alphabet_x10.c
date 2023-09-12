#include "main.h"

/**
  * print_alphabet_x10 - print the alphabets 10x, lowercase
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	char c = 'a';
	int t = 10;

	while (t > 0)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		t--;
	}
}
