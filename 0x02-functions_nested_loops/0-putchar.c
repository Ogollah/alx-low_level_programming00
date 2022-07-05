#include <main.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < sizeof(word); i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
