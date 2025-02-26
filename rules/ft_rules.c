/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 08:04:33 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/31 06:24:16 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Push rules
int	pa(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_push(stack_a, stack_b) == 0)
		return (0);
	ft_putendl_fd("pa", 1);
	return (1);
}

int	pb(t_stack **stack_b, t_stack **stack_a)
{
	if (ft_push(stack_b, stack_a) == 0)
		return (0);
	ft_putendl_fd("pb", 1);
	return (1);
}

// Swap rules
int	sa(t_stack **stack)
{
	if (ft_swap(stack) == 0)
		return (0);
	ft_putendl_fd("sa", 1);
	return (1);
}

int	sb(t_stack **stack)
{
	if (ft_swap(stack) == 0)
		return (0);
	ft_putendl_fd("sb", 1);
	return (1);
}

int	ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_putendl_fd("ss", 1);
	return (1);
}
