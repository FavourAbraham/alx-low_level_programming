#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/* Function to free a listint_t list and set the head to NULL */
void free_listint2(listint_t **head) {
    listint_t *current;
    while (*head != NULL) {
        current = *head;
        *head = (*head)->next;
        free(current);
    }
}
