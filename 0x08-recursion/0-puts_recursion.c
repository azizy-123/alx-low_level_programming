#include <stdio.h>

/**
 * _puts_recursion - Prints a string, followed by a new line.
 *
 * @s: A pointer to the string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	putchar('\n');
	return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "Hello, world!";

	_puts_recursion(s);
	return (0);
}

