#ifndef _FUNCTION_POINTERS
#define _FUNCTION_POINTERS

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* _FUNCTION_POINTERS */
