#include <unistd.h>

/**
 * _putchar : To print a character
 * @c: The character to be printed
 *
 * Return: the character value
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
