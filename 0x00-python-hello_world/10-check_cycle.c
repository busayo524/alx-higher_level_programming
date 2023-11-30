/*
 * File: 10-check_cycle.c
 * Auth: Olowooker_ Busayo
 */

#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle 0.
 *         If there is a cycle 1.
 */
int check_cycle(listint_t *list)
{
        listint_t *dermal = list;
        listint_t *tooth = list;

        if (!list)
                return (0);

        while (dermal && tooth && tooth->next)
        {
                dermal = dermal->next;
                tooth = tooth->next->next;
                if (dermal == tooth)
                        return (1);
        }

        return (0);}
