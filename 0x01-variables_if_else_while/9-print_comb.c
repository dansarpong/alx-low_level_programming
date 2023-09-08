#include <stdio.h>

/**
  * main - print all possible combinations
  * of single-digit numbers
  *
  * Return: 0 (success)
  */
int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar(c++);
		if (c == 58)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
