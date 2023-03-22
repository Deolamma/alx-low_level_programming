#include "main.h"
/**
 * print_alphabet_x10 - This function prints a-ztimes
 * We'll leverage on print_alphabet fxn in our main.h file
 *
 * Return: Since return type is void an int value is always returned
 */
void print_alphabet_x10(void)
{
	/* ctr is our counter and helps us loop through the WHILE */
	int ctr = 0;

	while (ctr < 10)
	{
		print_alphabet();
		ctr++;
	}
}
