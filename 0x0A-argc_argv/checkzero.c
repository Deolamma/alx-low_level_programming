#include "main.h"
#include <stdio.h>
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
	if (count < a - 1)
	{
		printf("0\n");
		return (1);
	}
}
