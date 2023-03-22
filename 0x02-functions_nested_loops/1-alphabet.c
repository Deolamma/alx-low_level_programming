#include "main.h"
/**
 * print_alphabet - This fxn prints out all the letters of the alphabet
 * leveraging on our main.h library to grant us acces to the -putchar fxn
 *
 * @void: this function takes no parameter list
 *
 * alp: this is the first character of the alphabets
 * It would be intialized in the FOR loop
 *
 * Return: Haa a return type of void,so it automatically returns an int
 */
void print_alphabet(void)
{
	/* remember char are integers*/
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}

