/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_relus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:24:26 by hdazia            #+#    #+#             */
/*   Updated: 2025/02/06 17:48:37 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	do_this_rules(t_stack **stack_a, t_stack **stack_b, char *str_input)
{
	if (ft_strcmp(str_input, "pa\n") == 0)
		pa_bonus(stack_a, stack_b);
	else if (ft_strcmp(str_input, "pb\n") == 0)
		pb_bonus(stack_b, stack_a);
	else if (ft_strcmp(str_input, "sa\n") == 0)
		sa_bonus(stack_a);
	else if (ft_strcmp(str_input, "sb\n") == 0)
		sb_bonus(stack_b);
	else if (ft_strcmp(str_input, "ss\n") == 0)
		ss_bonus(stack_a, stack_b);
	else if (ft_strcmp(str_input, "ra\n") == 0)
		ra_bonus(stack_a);
	else if (ft_strcmp(str_input, "rb\n") == 0)
		rb_bonus(stack_b);
	else if (ft_strcmp(str_input, "rr\n") == 0)
		rr_bonus(stack_a, stack_b);
	else if (ft_strcmp(str_input, "rra\n") == 0)
		rra_bonus(stack_a);
	else if (ft_strcmp(str_input, "rrb\n") == 0)
		rrb_bonus(stack_b);
	else if (ft_strcmp(str_input, "rrr\n") == 0)
		rrr_bonus(stack_a, stack_b);
	else
		return (-1);
	return (0);
}
