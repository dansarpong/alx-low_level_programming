#include "main.h"

/**
  * main - print _putchar
  * Return: 0 (success)
  */
int main(void)
{
	char *words = "_putchar";
	
	for (int c = 0; c < 8; c++)
	{
		_putchar(words[c]);
	}
	_putchar('\n');
	return (0);
}
