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
	int i = 0;
	char x;

	if (n == 0)
		return;
	va_start(myargs, n);
	while (i < (int) n)
	{
		x = va_arg(myargs, char);
		if (separator == NULL)
		{
			printf("%s%s", x, separator);
		} else
		{
			printf("(nil)"%s	



		i++;
	}
	printf("\n");
}

