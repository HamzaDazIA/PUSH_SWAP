/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 08:04:33 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/31 17:13:40 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

// Push rules
int	pa_bonus(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_push_bonus(stack_a, stack_b) == 0)
		return (0);
	write(1, "fo",2);
	return (1);
}

int	pb_bonus(t_stack **stack_b, t_stack **stack_a)
{
	if (ft_push_bonus(stack_b, stack_a) == 0)
		return (0);
	return (1);
}

// Swap rules
int	sa_bonus(t_stack **stack)
{
	if (ft_swap_bonus(stack) == 0)
		return (0);
	return (1);
}

int	sb_bonus(t_stack **stack)
{
	if (ft_swap_bonus(stack) == 0)
		return (0);
	return (1);
}

int	ss_bonus(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap_bonus(stack_a);
	ft_swap_bonus(stack_b);
	return (1);
}
