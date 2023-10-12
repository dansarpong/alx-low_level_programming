#ifndef VARIADIC_FUNTIONS_H
#define VARIADIC_FUNTIONS_H
#include <stdarg.h>

typedef struct func
{
	char *symbol;
	void (*fn)(va_list);
} fn_list;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
