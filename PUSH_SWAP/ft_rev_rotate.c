/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:32:27 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/16 17:16:41 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int rev_rotate(t_stack  **stack)
{
    t_stack *head;
    t_stack *last_node;

    if (ft_lstsize(*stack) < 2)
        return (0);
        
    head = *stack;
    last_node = ft_lstlast(*stack);
    while (head)
    {
        if (head->next->next == NULL)
        {
            head->next = NULL;
            break;
        }
        head = head->next ;
    }
    last_node->next = *stack;
    *stack = last_node;
    return (1);
}

