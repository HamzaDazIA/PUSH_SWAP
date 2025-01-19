/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_fonction2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:53:02 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/19 22:19:45 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_already_sortd(t_stack *stack)
{
    while (stack && stack->next) {
        if (stack->value > stack->next->value)
            return 0;
        stack = stack->next;
    }
    return 1;
}
void    position(t_stack    **stack)
{
    t_stack *head;
    int     i;

    i = 0;
    head = *stack;
    
    while (head)
    {
        head->pos = i;
        head = head->next;
        i++;
    }
}
