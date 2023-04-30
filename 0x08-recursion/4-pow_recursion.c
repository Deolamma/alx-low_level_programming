#include "main.h"
/**
 * _pow_recursion - calc. x raised to the power of y
 * @x: int val. 1
 * @y: int val 2
 * Return: x**y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return ((x * _pow_recursion(x, (y - 1))));
}
