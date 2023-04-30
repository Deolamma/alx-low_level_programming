#include "main.h"
#include <stddef.h>
/**
 * _strlen - gets the length of string
 * @s: string
 * Return: Length of string OR an int val.
 */
int _strlen(char *s)
{
	if (s == NULL)
		return (-1);
	if (*s == '\0')
		return (0);
	return ((1 + _strlen(s + 1)));
}
/**
 * _palindrome - checks if a string is a palindrome
 * @s: string
 * @start: current start index of the string
 * @end: current end index of the string
 * Return: returns 1 idf palindrome and 0 if not
 */
int _palindrome(char *s, int start, int end)
{
	if (s == NULL)
		return (-1);
	if (start >= end)
		return (1);
	if (s[start] == s[end])
	{
		return (_palindrome(s, start + 1, end - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if  a string is a palindrome
 * @s: string to be checked
 * Return: 1 if is_palindrome AND 0 if not
 */
int is_palindrome(char *s)
{
	int start;
	int end;
	int slen;

	if (s == NULL)
		return (-1);
	slen = _strlen(s);
	if (slen == 0)
		return (1);
	start = 0;
	end = slen - 1;
	return (_palindrome(s, start, end));
}

