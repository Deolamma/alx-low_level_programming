#include <stdio.h>
#include "main.h"
/**
 * _putchar - this is an abstraction of the putchar function
 *
 * prints out the argument passed to the _putchar function to stdout
 *
 *@n: is the character to be printed to stdout
 *Return: an int value(remember Char is also int)
 */
int _putchar(char n)
{
	return (putchar(n));
}
