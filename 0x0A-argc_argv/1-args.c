#include <stdio.h>
/**
 * main - prints out the number of arguments passed to main
 *
 * @argc: prints the number of argument passed into main
 * @argv: prints the arguments passed into the main fxn
 *
 * Return: Always 0 (success) or 1 (failure)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

