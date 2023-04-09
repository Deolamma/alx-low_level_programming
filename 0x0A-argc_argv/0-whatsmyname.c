#include "main.h"
#include <stdio.h>
/**
 * main - prints out the name of my compiled program to stdout
 *
 * @argc: param that prints out the number of arguments passed to main
 * @argv: array that stores argument passed into main
 *
 * Return: Always return 0 success or 1 fail
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}

