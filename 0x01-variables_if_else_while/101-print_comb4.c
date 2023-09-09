#include <stdio.h>

/**
  * main - print all possible combinations
  * of three digits
  *
  * Return: 0 (success)
  */
int main(void)
{
	int first = '0';
	int second;
	int third;

	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				putchar(first);
				putchar(second);
				putchar(third);
				if (first == '7' && second == '8' && third == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
				third++;
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
