/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:50:55 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/31 06:38:06 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_push(t_stack **stack_to, t_stack **stack_from)
{
	t_stack	*tmp_from;
	t_stack	*tmp_to;
	t_stack	*tmp;

	if (ft_lstsize(*stack_from) == 0)
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
		ft_lstadd_front(stack_to, tmp);
	return (1);
}
