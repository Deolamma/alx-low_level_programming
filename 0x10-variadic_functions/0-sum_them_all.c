#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums a number of integers variables
 * @n: number of variables to sum up
 * @...: variables to be passed into fxn
 * Return: returns sum of variables
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list myargs;
	int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(myargs, n);
	while (i < (int) n)
	{
		sum += va_arg(myargs, int);
		i++;
	}
	va_end(myargs);
	return (sum);
}

