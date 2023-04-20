#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name passed into the fxn
 * @name: name to be printed
 * @f: function pointer that accepts char as argument
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		name = "";
	f(name);
}

