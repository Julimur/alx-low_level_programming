#include "main.h"
/**
 * main - Entry Point
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}
