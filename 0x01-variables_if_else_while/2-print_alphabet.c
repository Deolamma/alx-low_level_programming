#include <stdio.h>
#include <ctype.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int alp;

	for (alp = 'A'; alp <= 'Z'; alp++)
	{
	putchar(tolower(alp));
	}

	putchar('\n');

	return (0);
}

