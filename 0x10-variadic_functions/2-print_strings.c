#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints unknown variables separated by separator
 * @separator: character to be placed after each variable
 * @n: number of variables to be passed into function
 * @...: Unknown variables to be worked upon
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list myargs;
	unsigned int i = 0;
	char *str;

	va_start(myargs, n);
	while (i < n)
	{
		str = va_arg(myargs, char *);
		if (str == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(myargs);
}

