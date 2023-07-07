#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints out one character at a time
 * @c: character to be printed out
 * Return: Zero on Success
 */
int _putchar(int c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

