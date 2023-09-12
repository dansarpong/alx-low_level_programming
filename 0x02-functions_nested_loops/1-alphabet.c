#include "main.h"

/**
  * print_alphabets - print alphabets, lowercase
  *
  *
  * Return: None
  */
void print_alphabet(void)
{
	char c = 'a';

	for( ;c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
