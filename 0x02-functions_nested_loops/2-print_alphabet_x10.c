#include "main.h"
/**
 * print_alphabet_x10 - This function prints a-ztimes
 * We'll leverage on print_alphabet fxn in our main.h file
 *
 * Return: Since return type is void an int value is always returned
 */
void print_alphabet_x10(void)
{
	/**
	 * alp represents our character value
	 * char are ints
	 * ctr is our counter and helps us loop through the WHILE
	 */
	int alp;
	int ctr = 0;

	while (ctr < 10)
	{
		for (alp = 'a'; alp <= 'z' ; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
		ctr++;
	}
}
