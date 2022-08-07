#include "main.h"

/**
 * out_specs - function to identify specs crt to func
 * @args: variadic args
 * @nt: id
 * Return: output
 */

int out_specs(char nt, va_list args)
{
	int index;

	specs_id cmp[] = {
		{"c", specs_c},
		{"s", specs_s},
{"d", specs_d},
		{"i", specs_d},
{"u", specs_u},
{"o", specs_o},
		{"x", specs_h},
		{"X", specs_H},
{"S", specs_S},
{"b", specs_b},
		{NULL, NULL}
	};

	for (index = 0; cmp[index].spec != NULL; index++)
	{
		if (cmp[index].spec[0] == nt)
			return (cmp[index].outs(args));
	}
	return (0);
}

