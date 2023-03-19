#include <stdio.h>
/**
 * main - Entry point
 * Printing all possible combinations
 * of bas10 digits without repetitions
 * 013 and 031 are considered repetition
 */
int main(void)
{
	/*Initializing variables*/
	int num, num1, num2;

	/*Using FOR loop to iterate through the 3 digits*/
	for (num  = 0; num < 10; num++)
	{
		for (num1 = 1; num1 < 10; num1++)
		{
			for (num2 = 2; num2 < 10; num2++)
			{
				/**
				 * Remove leading space
				 */
				if (num != 0 && num2 != 2)
					putchar(' ');
				/**
				 * Check that current combination
				 * isn't a duplicate
				 */
				if (num >= num1 || num1 >= num2)
				{
					continue;
				}
					putchar(48 + num);
					putchar(48 + num1);
					putchar(48 + num2);
					/**
					 * Removing trailing Comma
					 */
					if (num != 7 && num1 != 8 && num2 != 9)
					putchar(',');
			}
		}
	}
	putchar('\n');

	return (0);
}

