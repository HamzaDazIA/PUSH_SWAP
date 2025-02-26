/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_elements.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:14:36 by hdazia            #+#    #+#             */
/*   Updated: 2025/02/08 15:11:49 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_smallest_position(t_stack **stack_a)
{
	int			smallest_pos;
	int			smallest_index;
	t_stack		*current;
	int			i;

	smallest_pos = 0;
	smallest_index = (*stack_a)->index;
	current = *stack_a;
	i = 0;
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
	return (smallest_pos);
}

void	push_numbers_to_stack_b(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	hm_push;

	size = ft_lstsize(*stack_a);
	hm_push = 0;
	while (size > 6 && hm_push < size / 2)
	{
		if ((*stack_a)->index <= size / 2)
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

static void	sort_three_numbers(t_stack **stack)
{
	int	first;
	int	second;
	int	third;

	first = (*stack)->index;
	second = (*stack)->next->index;
	third = (*stack)->next->next->index;
	if (first > second && second < third && first < third)
		sa(stack);
	else if (first > second && second > third)
	{
		sa(stack);
		rra(stack);
	}
	else if (first > second && second < third && first > third)
		ra(stack);
	else if (first < second && second > third && first < third)
	{
		sa(stack);
		ra(stack);
	}
	else if (first < second && second > third && first > third)
		rra(stack);
}

void	sort_more_numbe(t_stack **stack_a, t_stack **stack_b)
{
	push_numbers_to_stack_b(stack_a, stack_b);
	sort_three_numbers(stack_a);
	while (*stack_b)
	{
		target_pos_and_pos(stack_a, stack_b);
		cost_element(stack_a, stack_b);
		calcul_cost_push(stack_a, stack_b);
	}
	if (is_already_sortd(*stack_a) == 0)
		rotate_stack_a(stack_a);
}

void	sortd_element(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) == 2)
		sa(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		sort_three_numbers(stack_a);
	else if (ft_lstsize(*stack_a) > 3)
		sort_more_numbe(stack_a, stack_b);
}
