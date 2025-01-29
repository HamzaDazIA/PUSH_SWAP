/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_focntion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 22:28:10 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/29 06:25:43 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_free_split(char **pointer)
{
    int i = 0;

    while (pointer[i])
    {
        free(pointer[i]);
        i++;
    }
    free(pointer);
}
static	int find_indix(t_stack **stack, int value)
{
	t_stack	*head;
	int	i;

	i = 0;
	head = *stack;
	while (head)
	{
		if (head->value < value)
			i++;
		head = head->next;
	}
	return(i);
}
void	index_stack(t_stack **stack_a)
{
	t_stack	*head;
	int	index;
	
	head = *stack_a;

	while (head)
	{
		index = find_indix(stack_a, head->value);
		head->index = index;
		head  = head->next;
	}
}
