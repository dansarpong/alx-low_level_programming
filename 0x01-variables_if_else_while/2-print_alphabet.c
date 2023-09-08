#include <stdio.h>

/**
  * main - print lower alphabets
  *
  * Return: 0 (success)
  */
int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		putchar(c++);
	}
	putchar(10);
	return (0);
}
