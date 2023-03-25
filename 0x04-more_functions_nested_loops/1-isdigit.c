#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 *
 * @c: is a parameter
 *
 * Return: 1 if upper and 0 if lower
*/

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	return (0);

}
