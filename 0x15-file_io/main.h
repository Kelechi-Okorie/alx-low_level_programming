#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <sys/types.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif /* _MAIN_H */