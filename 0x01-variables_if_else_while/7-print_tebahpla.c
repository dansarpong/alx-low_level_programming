#include <stdio.h>

/**
  * main - print lower alphabets in reverse
  *
  * Return: 0 (success)
  */
int main(void)
{
	int c = 122;

	while (c >= 97)
	{
		putchar(c--);
	}
	putchar('\n');
	return (0);
}
