#include <stdio.h>
/**
 * main - prints all arguments passed into main
 *
 * @argc: stores the number of arguments passed into main
 * @argv: stores the arguments of an array
 *
 */
int main(int argc, char *argv[])
{
	int i;
	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
