#include "main.h"

/**
 * specs_b - base 2 handler
 * @s: output
 * @p: output
 */

void specs_b(unsigned int s, unsigned int *p)
{
	if (s > 1)
	{
		*p += 1;
		specs_b(s >> 1, p);
	}
	_putchar((s & 1) + '0');
}

/**
 * specs_u_b - num output.
 * @args: argument
 * Return: 0
 */
int specs_u_b(va_list args)
{

unsigned int n = va_arg(args, unsigned int);
unsigned int p;

specs_b(n, &p);
specs_b(n, &p);

return (p);
}

