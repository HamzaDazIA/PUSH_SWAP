/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_relus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:24:26 by hdazia            #+#    #+#             */
/*   Updated: 2025/02/01 10:59:31 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	comper(char *str_input, char *str_rules)
{
	int	i;

	i = 0;
	while (str_input[i])
	{
		if (str_input[i] != str_rules[i])
			return (0);
		i++;
	}
	return (1);
}

int	do_this_rules(t_stack **stack_a, t_stack **stack_b, char *str_input)
{
	if (comper(str_input, "pa\n"))
		pa_bonus(stack_a, stack_b);
	else if (comper(str_input, "pb\n"))
		pb_bonus(stack_b, stack_a);
	else if (comper(str_input, "sa\n"))
		sa_bonus(stack_a);
	else if (comper(str_input, "sb\n"))
		sb_bonus(stack_b);
	else if (comper(str_input, "ss\n"))
		ss_bonus(stack_a, stack_b);
	else if (comper(str_input, "ra\n"))
		ra_bonus(stack_a);
	else if (comper(str_input, "rb\n"))
		rb_bonus(stack_b);
	else if (comper(str_input, "rr\n"))
		rr_bonus(stack_a, stack_b);
	else if (comper(str_input, "rra\n"))
		rra_bonus(stack_a);
	else if (comper(str_input, "rrb\n"))
		rrb_bonus(stack_b);
	else if (comper(str_input, "rrr\n"))
		rrr_bonus(stack_a, stack_b);
	else
		return (-1);
	return (0);
}
