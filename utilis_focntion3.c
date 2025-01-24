/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_focntion3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 08:27:19 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/24 08:27:34 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_smallest_position(t_stack **stack_a)
{
    int smallest_pos = 0;
    int smallest_index = (*stack_a)->index;
    t_stack *current = *stack_a;
    int i = 0;

    while (current)
    {
        if (current->index < smallest_index)
        {
            smallest_index = current->index;
            smallest_pos = i;
        }
        current = current->next;
        i++;
    }
    return smallest_pos;
}

void rotate_stack_a(t_stack **stack_a)
{
    int smallest_pos = find_smallest_position(stack_a);
    int stack_size = ft_lstsize(*stack_a);
    int middle_pos = stack_size / 2;

    if (smallest_pos <= middle_pos)
    {
        int rotations = smallest_pos;
        while (rotations-- > 0)
            ra(stack_a);
    }
    else
    {
        int rotations = stack_size - smallest_pos;
        while (rotations-- > 0)
            rra(stack_a);
    }
}