#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints up to 98 from whatever argument passed
 *
 * @n: argument to be passed into the fxn and would determine
 * where printing to 98 starts from
 *
 * Return: Always an integer when return type is void
 */
void print_to_98(int n)
{
	int num, num1;

	if (n <= 98)
	{
		for (num = n; num <= 98; num++)
		{
			if (num != 98)
				printf("%d, ", num);
			else if (num == 98)
				printf("%d\n", num);
		}
	} else if (n >= 98)
	{
		for (num1 = n; num1 >= 98; num1--)
		{
			if (num1 != 98)
				printf("%d, ", num1);
			else if (num1 == 98)
				printf("%d\n", num1);
		}
	}
}

