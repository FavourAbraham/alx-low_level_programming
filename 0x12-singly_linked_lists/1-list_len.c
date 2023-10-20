#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len= counts the number of list
 * h= Point to the head of linked list
 * Return= returns the element in linked list*
 *
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)    
	{
        count++;
        h = h->next;
    	}
	return count;
}
