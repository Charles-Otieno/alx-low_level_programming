#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to the first element in the list
 * @n: data to be inserted in the new element
 *
 * Return: Address of the new element, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	(void)temp;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;
	}
	return (new);
}
