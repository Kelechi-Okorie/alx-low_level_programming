#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _MAIN_H */
