/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rev_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:06:09 by hdazia            #+#    #+#             */
/*   Updated: 2025/02/01 13:53:00 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	rra_bonus(t_stack **stack_a)
{
	if (rev_rotate_bonus(stack_a) == 0)
		return (0);
	return (1);
}

int	rrb_bonus(t_stack **stack_b)
{
	if (rev_rotate_bonus(stack_b) == 0)
		return (0);
	return (1);
}

void	rrr_bonus(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate_bonus(stack_a);
	rev_rotate_bonus(stack_b);
}
