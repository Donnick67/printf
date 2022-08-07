#ifndef TYPE_H
#define TYPE_H

#include "main.h"

/**
 * struct specs_id - structs
 * @spec: custom type group
 * @outs: print
 */
typedef struct specs_id
{
char *spec;
int (*outs)(va_list);
} specs_id;

#endif

