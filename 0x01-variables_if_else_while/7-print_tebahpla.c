#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pla;

	for (pla = 'z'; pla >= 'a'; pla--)
	{
		putchar(pla);
	}
	putchar('\n');

	return (0);
}

