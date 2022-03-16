#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);


/**
 * print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);

/*
 * A function that prints 10 times the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet_x10(void);

/**
 * _islower - This function checks for lowercase character.
 */

int _islower(int c);

/**
 * _isalpha - This function check if c is an alphabet
 */

int _isalpha(int c);

/**
 * print_sign(int n) -  prints the sign of a number 
 * Return: 0 or 1
 */

int print_sign(int n);

/**
 * _abs - computes the absolute value of an integer.
 */
int _abs(int);

/**
 * print_last_digit - prints the last digit of a number.
 */
int print_last_digit(int);

/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */

void jack_bauer(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void times_table(void);

#endif
