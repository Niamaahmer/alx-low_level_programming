#include "main.h"

/**
 * _put_recursion - prints a string, follwed by a new line
 * @s: pointer to the string
 * Return: void
 */
void _put_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
