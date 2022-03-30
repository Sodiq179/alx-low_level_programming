#include "main.h"

/**
 * _strlen - To get the length of a string 
 * @str: The string
 * 
 * Return: the length of the string
 */
unsigned int _strlen(char *str)
{
	int len, i = 0;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * _puts_recursion - This function prints out a string 
 * @s: The string
 */
void _puts_recursion(char *s)
{
	int i = 0;
	
	for (int i = 0; i < _strlen(s); i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
