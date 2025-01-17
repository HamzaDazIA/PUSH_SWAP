/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_elements.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:14:36 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/17 15:53:11 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void sort_three_numbers(t_stack **stack)
{
    t_stack *head;

    head = *stack;
    if (head->index == 1 && head->next->index == 3)
    {
        rra(stack);
        sa(stack);
    }
    else if (head->index == 2 && head->next->index == 3 )
        rra(stack);
    else if (head->index == 2 && head->next->index == 1)
        sa(stack);
    else if (head->index == 3 && head->next->index == 1)
        ra(stack);
    else if (head->index == 3 && head->next->index == 2)
    {
        ra(stack);
        sa(stack);
    }
}
void    sortd_element(t_stack **stack_a , t_stack **stack_b)
{
    if (ft_lstsize(*stack_a) == 2)
    {
        sa(stack_a);
    }
    else if (ft_lstsize(*stack_a) == 3)
    {
        sort_three_numbers(stack_a);
    }
    
}
