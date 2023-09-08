#include <stdio.h>

/**
  * main - print all base16 numbers in lowercase
  *
  * Return: 0 (success)
  */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c++);
	}
	c = 'a'
	while (c <= 'f')
	{
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
