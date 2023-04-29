#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - Adds two int values
 * @a: first int value
 * @b: second int value
 * Return: returns the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtracts two int values
 * @a: first int value
 * @b: second int value
 * Return: returns the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multoplies two int values
 * @a: first int value
 * @b: second int value
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two int values
 * @a: first int value
 * @b: second int value
 * Return: returns the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Modulo of two int values
 * @a: first int value
 * @b: second int value
 * Return: returns the modulo of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

