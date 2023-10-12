#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - print numbers followed by a newline
  * @separator: string to be printed between numbers
  * @n: number of integers
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (separator && ((i + 1) < n))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
