#include <stdio.h>
#include <ctype.h>
/**
 * _checkzero - checks if a array of args passed into a fxn contains an int val
 *
 * @a: This is the number of argument present in the array
 * @myarg: These are the arguments present in the array
 *
 * Return: Always 0 Success or 1 failure
 */
int _checkzero(int a, char *myarg[])
{
        int i = 0;
        int count = 0;

        for (i = 1; i < a; i++)
        {
                if (isdigit(*myarg[i]))
                        count++;
        }
	   if (count == 0)
        {
                printf("0\n");
		return (1);
        }
	return (0);
}

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

	if (argc == 1)
		printf("0\n");
	if (argc > 2)
	{
		/**
		 * checks that no int digit was passed as an argument and prints out 0
		 */
		if(_checkzero(argc, argv) == 1)
			return (1);
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

