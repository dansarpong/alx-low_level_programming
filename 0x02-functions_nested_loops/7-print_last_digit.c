#include "main.h"

/**
  * print_last_digit - print last digit of a number
  * @n: number being computed
  * Return: last digit
  */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	if (a < 0)
		a = -a;
	a = n % 10;
	_putchar(a + '0');
	return (a);
}
