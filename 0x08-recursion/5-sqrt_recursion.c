#include "main.h"
/**
 * _sqrt - helps us find sqrt by recursively until match is found
 * @n: int val. whose sqrt we want
 * @i: helps us loop incrementing from 0 until match is found
 * Return: returns sqrt(n)
 */
int _sqrt(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - returns sqrt of a natural number
 * @n: natural number
 * Return: sqrt(n)
 */
int _sqrt_recursion(int n)
{
	/**
	 * a negative int value cannot have natural number sqrt
	 */
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
