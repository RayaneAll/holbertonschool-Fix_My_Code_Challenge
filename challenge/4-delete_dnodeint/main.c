#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_and_delete - Helper function to delete and print the list.
 * @head: A pointer to the head of the list.
 */
void print_and_delete(dlistint_t **head)
{
	print_dlistint(*head);
	printf("-----------------\n");
	delete_dnodeint_at_index(head, 0);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	int i;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("-----------------\n");

	for (i = 0; i < 8; i++)
		print_and_delete(&head);

	print_dlistint(head);
	free_dlistint(head);
	return (0);
}
