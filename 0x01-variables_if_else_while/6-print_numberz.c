#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int num;

	/**
	  * Printing outa list of base 10 numbers
	  * Using PUTCHAR
	  * Using FOR loop
	  */
	for (num = 0; num < 10; num++)
	{
		putchar(48 + num);
	}
	putchar('\n');

	return (0);
}

