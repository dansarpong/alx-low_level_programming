#include <stdio.h>

/**
  * main - print single digit numbers
  *
  * Return: 0 (success)
  */
int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
