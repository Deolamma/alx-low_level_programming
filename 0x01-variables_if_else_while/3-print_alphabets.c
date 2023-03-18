#include <stdio.h>
#include <ctype.h>
/**
  * main - Entry point into my code
  *
  * Return: Always 0 (Succes)
  */
int main(void)
{
	int alp;
	/*converting from upper to lowercase*/
	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(tolower(alp));
	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(toupper(alp));
	putchar('\n');

	return (0);
}

