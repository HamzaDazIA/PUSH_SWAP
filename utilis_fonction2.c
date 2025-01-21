/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_fonction2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:53:02 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/21 10:03:32 by hdazia           ###   ########.fr       */
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
int	target_poss(t_stack	**stack_a, int indix_b, int smallind, int target_pos)
{
	t_stack	*p_a;

	p_a = *stack_a;
	while(p_a)
	{
		if (p_a->index > indix_b && p_a->index < smallind)
		{
			target_pos =  p_a->pos;
			smallind = p_a->index;
		}
		p_a = p_a->next;
	}
	if (smallind == INT_MAX)
	{
		p_a = *stack_a;
		while (p_a)
		{
			if (p_a->index < smallind)
			{
				target_pos =  p_a->pos;
				smallind = p_a->index;
			}
			p_a = p_a->next;
		}
	}
	return (target_pos);
}

void	target_pos_and_pos(t_stack	**stack_a,	t_stack	**stack_b)
{
	int	target_pos;
	t_stack	*p_b;
	
	p_b = *stack_b;
	position(stack_a);
	position(stack_b);
	
	while (p_b)
	{
		target_pos = target_poss(stack_a, p_b->index, INT_MAX, target_pos);
		p_b->target_pos = target_pos;
		p_b = p_b->next;
	}
}