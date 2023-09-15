#include "main.h"

/*
 * print_squire - function print & squire
 * @size: size of square 
 * Description: can only use _putchar to print . Use '#' to print squire.
 */
void pint_squire(int size)
{
	int x, y;

	y = 0;

	if(size<1)
		_putchar('\n');

	while(y < size)
	{
		x = 0;
		while(x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
