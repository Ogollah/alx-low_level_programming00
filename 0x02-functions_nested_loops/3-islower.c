#include <stdio.h>
#include "main.h"

/**
 * int _islower - accepts an int value
 * Description: Checks for lowe case and return 1 else returns 0
 * Return: 1 if lowercase else 0.
 */
int _islower(int c)
{
	int lower;
	int res = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == c)
		{
			res = 1;
		}
	}
	return (res);
}
