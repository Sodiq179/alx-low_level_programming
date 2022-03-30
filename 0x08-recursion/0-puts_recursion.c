#include "main.h"

/**
 * _puts_recursion - This function prints out a string 
 * @s: The string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{

		_putchar('\n');

	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
