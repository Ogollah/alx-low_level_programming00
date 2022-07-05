#include "main.h"

/**
 * print_alphabet - function that prints all the alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');

}
