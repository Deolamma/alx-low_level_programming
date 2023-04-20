#include "function_pointers.h"
/**
 * print_name - prints a name passed into the fxn
 * @name: name to be printed
 * @f: function pointer that accepts char as argument
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

