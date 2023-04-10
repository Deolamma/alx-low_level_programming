#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - prints out the sum of all arguments passed unto main
 *
 * @argc: stores the count of int passed into main fxn
 * @argv: stores the arguments passed into main fxn
 *
 * Return: returns 0 (Success) or 1 (failure)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int count = 0;

	if (argc == 1)
		printf("0\n");
	if (argc > 2)
	{
		/**
		 * checks that no int digit was passed as an argument and prints out 0
		 */
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
				count++;
		}
		if (count < argc - 1)
		{
			printf("0\n");
			return (1);
		}
		for (i = 1; i < argc; i++)
		{
			/**
			 * *argv[i] gives us the actual value
			 * of data stored in argv, hence enabling
			 * our ability to ascertain numerical nature of data stored
			 */
			if (isdigit(*argv[i]))
			{
				sum += atoi(argv[i]);
			} else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

