#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Desscription: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif /* _MAIN_H */