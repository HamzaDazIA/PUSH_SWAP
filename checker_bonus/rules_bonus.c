/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:19:12 by hdazia            #+#    #+#             */
/*   Updated: 2025/02/01 13:52:57 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ra_bonus(t_stack **stack_a)
{
	if (rotate_bonus(stack_a) == 0)
		return (0);
	return (1);
}

int	rb_bonus(t_stack **stack_b)
{
	if (rotate_bonus(stack_b) == 0)
		return (0);
	return (1);
}

int	rr_bonus(t_stack **stack_a, t_stack **stack_b)
{
	rotate_bonus(stack_a);
	rotate_bonus(stack_b);
	return (1);
}
