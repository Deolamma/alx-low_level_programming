#include <stdio.h>
/**
 * main - Entry point
 * Printing single digit numbers
 * Using the putchar function only
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 0)
			putchar(' ');
		putchar(48 + num);
		if (num != 9)
			putchar(',');
	}
	putchar('\n');

	return (0);
}

