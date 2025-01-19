/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_fonction2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:53:02 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/19 22:03:19 by hdazia           ###   ########.fr       */
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
void   push_numbers_to_stack_b(t_stack  **stack_a, t_stack **stack_b)
{
	int	size;
	int hm_push; //how mutch push in stak b

	size = ft_lstsize(*stack_a);
	hm_push = 0;
	
	while (hm_push < size / 2)
	{
		if((*stack_a)->index <= size / 2)
		{
			pb(stack_b, stack_a);
			hm_push++;
		}
		else
			ra(stack_a);
	}
	while (size - hm_push > 3)
	{
		pb(stack_b, stack_a);
		hm_push++;
	}
}
