#include <stdio.h>

/**
  * main - print all possible combinations
  * of two digits
  *
  * Return: 0 (success)
  */
int main(void)
{
	int first = '0';
	int second;

	while (first < '9')
	{
		second = first + 1;
		while (second <= '9')
		{
			putchar(first);
			putchar(second);
			if (first == '8' && second == '9')
			{
				continue;
			}
			putchar(',');
			putchar(' ');
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
