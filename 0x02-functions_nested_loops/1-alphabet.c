#include "unistd.h"
/**
 *main -  print_alphabet - prints the alphabet in lowercass with ending new line
 *
 *Return: void, and prints the alphabet on the standard output
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
