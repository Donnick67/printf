#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
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

int _putchar(char c);
int out_specs(char next, va_list args);
int _printf(const char *format, ...);
int specs_c(va_list args);
int specs_s(va_list args);
int specs_d(va_list args);
int specs_u(va_list args);
int specs_o(va_list args);
int specs_hex(va_list args, char s);
int specs_h(va_list args);
int specs_H(va_list args);
int specs_S(va_list args);
int specs_u_h(unsigned int count, char s);
int specs_u_b(va_list args);
void specs_b(unsigned int s, unsigned int *p);

#endif

