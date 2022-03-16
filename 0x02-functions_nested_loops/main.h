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

/*Write a function that checks for lowercase character.
 */

int _islower(int c);
#endif
