#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints unknown variables separated by separator
 * @separator: character to be placed after each variable
 * @n: number of variables to be passed into function
 * @...: Unknown variables to be worked upon
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list myargs;
	int i = 0;
	int x;

	if (n == 0)
		return;
	va_start(myargs, n);
	while (i < (int) n)
	{
		x = va_arg(myargs, int);
		separator != NULL ? printf("%d%s", x,
		i == (int) n - 1 ? "" : separator) : printf("%d", x);
		i++;
	}
	if (separator == NULL)
		printf("\n");
}

