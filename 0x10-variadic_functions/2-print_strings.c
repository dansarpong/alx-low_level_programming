#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - print strings
  * @separator: separator
  * @n: number of strings
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *c;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(ap, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (separator && (i + 1) < n)
			printf("%s", separator);
	}
	printf("\n");
}
