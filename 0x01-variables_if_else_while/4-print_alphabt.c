#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == 'q' || alp == 'e')
		{
			continue;
		} else
		{
			putchar(alp);
		}
	}

	putchar('\n');

	return (0);
}
