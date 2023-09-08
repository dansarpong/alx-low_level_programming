#include <stdio.h>

/**
  * main - print lower alphabets
  * except q and e
  *
  * Return: 0 (success)
  */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' || c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
