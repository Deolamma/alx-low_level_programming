#include "main.h"
/**
 * _prime - checks for primality of n
 * @n: int val. to check f=primality status of
 * @i: helps us loop until primality is found
 * Return: 1 if n is prime and 0 if it's not
 */
int _prime(int n, int i)
{
	if (n < 2)
		return (0);
	if ((n % i) == 0)
		return (0);
	if ((i * i) > n)
		return (1);
	return (_prime(n, i + 1));
}
/**
 * is_prime_number - checks if an int val. is prime
 * @n: int val.
 * Return: 1 if n is prime OR 0 if it's not
 */
int is_prime_number(int n)
{
	return ((_prime(n, 2)));
}
