/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:50:55 by hdazia            #+#    #+#             */
/*   Updated: 2025/02/01 13:52:42 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_push_bonus(t_stack **stack_to, t_stack **stack_from)
{
	t_stack	*tmp_from;
	t_stack	*tmp_to;
	t_stack	*tmp;

	if (ft_lstsize_bonus(*stack_from) == 0)
		return (0);
	tmp_from = *stack_from;
	tmp_to = *stack_to;
	tmp = tmp_from;
	tmp_from = tmp_from->next;
	*stack_from = tmp_from;
	if (tmp_to == NULL)
	{
		tmp_to = tmp;
		tmp->next = NULL;
		*stack_to = tmp_to;
	}
	else
		ft_lstadd_front_bonus(stack_to, tmp);
	return (1);
}
