#include <stdio.h>

/**
  * main - print the largest prime factor of a number
  * Return: 0 (success)
  */

int main(void)
{
	long int num = 612852475143;
	long int lpf;

	for (lpf = 2; lpf < num; lpf++)
	{
		while (num % lpf == 0)
		{
			num /= lpf;
		}
	}
	printf("%ld\n", num);
	return (0);
}
