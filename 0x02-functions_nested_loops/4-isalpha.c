#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * Description: check if a char is a lower case or uppercase letter
 * Return: 1 else 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c <= 'z') && (c >= 'A' || c <= 'Z'))
		return (1);
	else
		return (0);
}
