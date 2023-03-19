#include <stdio.h>
/**
 * main - Entry point
 * Printing all possible combinations of base10 digits
 * without duplicates e.g. 01 & 10 are same
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, num1;
	/*Nested for loop to get two digits*/
	for (num = 0; num < 10; num++)
	{
		for (num1 = 0; num1 < 10 ; num1++)
		{
			/**
			 * IF check to eliminate duplicates
			 * If number 1 is greater tha number 2
			 * It must have been printed e.g 02 20
			 */
			if (num >= num1)
				continue;
			/*IF check to eliminate leading space*/
			if (num + num1 != 1)
				putchar(' ');
			putchar(48 + num);
			putchar(48 + num1);
			/**
			 * IF check to eliminate trailing comma after
			 * last digit
			 */
			if (num != 8 && num != 9)
				putchar(',');
		}
	}
	putchar('\n');

	return (0);
}

