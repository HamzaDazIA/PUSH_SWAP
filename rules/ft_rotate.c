/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:53:24 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/31 06:29:24 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*last_node;

	if (ft_lstsize(*stack) < 2)
		return (0);
	last_node = ft_lstlast(*stack);
	head = *stack;
	last_node->next = head;
	*stack = head->next;
	head->next = NULL;
	return (1);
}
