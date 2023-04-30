#include "main.h"
/**
 * factorial - prints the factorial of int values
 * @n: int value to run our factorial fxn on
 * Return: n!
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return ((n * factorial(n - 1)));
}
