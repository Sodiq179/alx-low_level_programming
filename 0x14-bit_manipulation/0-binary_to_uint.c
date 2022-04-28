#include "main.h"

/**
 * raise_to - raise an integer to the power of another
 * @x: The valu to be raised
 * @y: The power to be raised to
 *
 * Return: The result of the operation
 */
int raise_to(int x, unsigned int y)
{
	int result = 1;
	unsigned int i = 0;

	for (i = 0; i < y; i++)
	{
		result *= x;
	}
	return (result);
}

/**
 * _strlen - calculate the length of a string
 * @s: The string
 *
 * Return: The length of the string
 */
int _strlen(const char *s)
{
	int len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * binary_to_uint - converts binary to an unsigned int
 * @b: The binary to be converted
 *
 * Return: The value in unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0;

	if (!b)
	{
		return (0);
	}
	int b_size = _strlen(b);
	unsigned int int_val = 0;

	for (i = 0; i < b_size; i++)
	{
		if (!(b[i] == '0' || b[i] == '1'))
		{
			return (0);
		}
	}
	for (i = b_size - 1, j = 0; i >= 0; i--, j++)
	{
		int_val += ((b[i] - 48) * raise_to(2, j));
	}
	return (int_val);
}
