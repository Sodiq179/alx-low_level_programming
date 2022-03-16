#include "main.h"

/**
 * _islower - this function returns 1 if c is a lowercase alphabet else return 0
 * @c: The alphabet to be checked
 *
 * Return: it returns either 1 or 0
 */
int _islower(int c)
{
	if (c>='a' && c<='z'){
		return (1); }
	else{
		return (0);
	}
}
