#include "main.h"

/**
 *  _isalpha -  checks for alphabetic character
 *  @c: character to be checked
 *
 *  Return: 0 if c is a letter. 1 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}
