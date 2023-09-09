#include <stdio.h>

/**
  * main - print all possible combinatioins of
  * two two-digit numbers
  *
  * Return: 0 (success)
  */
int main(void)
{
	int a = '0';
	int b;
	int c;
	int d;

	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = a;
			d = b + 1;
			while (c <= '9')
			{
				while (d <= '9')
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == '9' && b == '8' && c == '9' && d == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
					d++;
				}
				c++;
				d = '0';
			}
			b++;
		}
	a++;
	}
	putchar('\n');
	return (0);
}
