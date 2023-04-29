#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - returns the right operation for the operands
 * @s: operator to be passed to the function
 * Return: returns the a pointer to a function that takes 2 int val
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

