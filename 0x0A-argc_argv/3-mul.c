#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints out the multiplication of 2 args passed to main
 *
 * @argc: stores the count of arguments passed into main fxn
 * @argv: stores the arguments passed into main fxn
 *
 * Return: Always 0 (success) or 1 (failure)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc > 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
