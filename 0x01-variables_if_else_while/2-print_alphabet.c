#include <stdio.h>

/**
  * main - print lower alphabets
  *
  * Return: 0 (success)
  */
int main(void)
{
	int c;
	
	c = 122;
	while (c >= 97)
	{
		putchar(c--);
	}
	putchar(10);
	return (0);
}
