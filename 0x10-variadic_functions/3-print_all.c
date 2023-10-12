#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_char - print char
  * @ap: variable arg pointer
  */
void print_char(va_list ap)
{
	int c = va_arg(ap, int);

	printf("%c", c);
}

/**
  * print_int - print int
  * @ap: variable arg pointer
  */
void print_int(va_list ap)
{
	int i = va_arg(ap, int);

	printf("%i", i);
}

/**
  * print_float - print float
  * @ap: variable arg pointer
  */
void print_float(va_list ap)
{
	double f = va_arg(ap, double);

	printf("%f", f);
}

/**
  * print_string - print string
  * @ap: variable arg pointer
  */
void print_string(va_list ap)
{
	char *c = va_arg(ap, char *);

	if (c)
		printf("%s", c);
	else
		printf("(nil)");
}

/**
  * print_all - print anything
  * @format: required format
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *sep = "";
	fn_list func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(func[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", sep);
			func[j].fn(ap);
			sep = ", ";
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
