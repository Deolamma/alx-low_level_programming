#include <stdio.h>
/**
 * main - Entry point
 * Printing all base 16 numbers using putchar only
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	/**
	 * Using for loop to iterate through the digits first
	 */
	for (num = 0; num < 10; num++)
		putchar(48 + num);
	/**
	 * Using for loop to iterate through the
	 * characters of base 16
	 * REMEMBER Char are Integers in C
	 */
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);
	putchar('\n');

	return (0);
}

