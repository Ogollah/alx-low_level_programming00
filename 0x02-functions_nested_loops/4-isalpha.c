#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * Description: check if a char is a lower case or uppercase letter
 * Return: 1 else 0.
 */
int _isalpha(int c)
{
	int lower;
	int upper;
	int res = 0;

	if ((c >= 'a' || c <= 'z') && (c >= 'A' || c <= 'Z'))
		return (1);
	else
		return (0);
}
