#include "main.h"
/**
 * print_alphabet -  prints the alphabet, in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char a;

	for (a = 97; a <= 122; a++)
		_putchar(a);
	_putchar('\n');
}
