#include <stdio.h>

/**
  * main - print all alphabets
  *
  * Return: 0 (success)
  */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c++);
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
