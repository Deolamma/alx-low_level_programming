#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_char - prints a char
 * @args: contains the char to be printed out
 * Return: Nothing
 */
void print_char(va_list args)
{
	char ch;

	ch  = va_arg(args, int);
	printf("%c", ch);
}
/**
 * print_float - prints a floating point val
 * @args: contains the float to be printed out
 * Return: Nothing
 */
void print_float(va_list args)
{
	double f_val;

	f_val = va_arg(args, double);
	printf("%f", f_val);
}
/**
 * print_int - prints an int
 * @args: contains the int to be printed out
 * Return: Nothing
 */
void print_int(va_list args)
{
	int int_val;

	int_val = va_arg(args, int);
	printf("%d", int_val);
}
/**
 * print_string - prints a string
 * @args: contains the string to be printed out
 * Return: Nothing
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
	} else
		printf("%s", str);
}

/**
 * print_all - prints based on specifiers
 * @format: list of types of argument passed to the fxn
 * @...: argumnets to be passed
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list myargs;
	const char *p;

	va_start(myargs, format);
	p = format;
	while (*p != '\0')
	{
		switch (*p)
		{
			case 'c':
				print_char(myargs);
				break;
			case 'i':
				print_int(myargs);
				break;
			case 'f':
				print_float(myargs);
				break;
			case 's':
				print_string(myargs);
				break;
			default:
				break;
		}
		if (*(p + 1) != '\0' && (*p == 'c' || *p == 'i' ||
					*p == 'f' || *p == 's'))
			printf(", ");
		p++;
	}
	va_end(myargs);
	printf("\n");
}

