#ifndef _LIST_H
#define _LIST_H

#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (mallo'ed string)
 * @len: length of the string
 * @next: points tot he next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* _LIST_H */
