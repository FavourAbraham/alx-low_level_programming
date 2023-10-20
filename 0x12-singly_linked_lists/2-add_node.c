#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * add_node - Add a new node at the beginning of a list_t list.
 * @head: A pointer to the pointer of the head of the list.
 * @str: The string to be duplicated and added to the list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    if (head == NULL || str == NULL)
     return (NULL);

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
     return (NULL);

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
     free(new_node);
     return (NULL);
    }

    new_node->len = strlen(str);
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}

