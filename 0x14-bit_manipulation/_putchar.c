#include <unistd.h>
/**
 * _putchar - prints out one character at a time
 * @c: character to be printed out
 * Return: Zero on Success
 */
int _putchar(int c)
{
	write(1, c, 1);
	return (0);
}

