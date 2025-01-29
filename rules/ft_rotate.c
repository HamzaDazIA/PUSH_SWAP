/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:53:24 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/29 06:34:37 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int rotate(t_stack **stack)
{
    t_stack *head;
    t_stack *last_ndoe;

    if (ft_lstsize(*stack) < 2)
        return (0);
    last_ndoe = ft_lstlast(*stack);
    head = *stack;

    last_ndoe->next = head;
    *stack = head->next;
    head->next = NULL;
    return (1);
}
