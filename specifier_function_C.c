#include "main.h"

void specs_b(unsigned int s, unsigned int *p)
{
	if (s > 1)
	{
		*p += 1;
		specs_b(s >> 1, p);
	}
	_putchar((s & 1) + '0');
}

