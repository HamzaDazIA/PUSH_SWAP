/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:32:27 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/31 16:44:12 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	rev_rotate_bonus(t_stack **stack)
{
	t_stack	*head;
	t_stack	*last_node;

	if (ft_lstsize(*stack) < 2)
		return (0);
	head = *stack;
	last_node = ft_lstlast(*stack);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	last_node->next = *stack;
	*stack = last_node;
	return (1);
}
