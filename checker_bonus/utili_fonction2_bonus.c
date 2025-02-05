/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utili_fonction_bomus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:54:03 by hdazia            #+#    #+#             */
/*   Updated: 2025/02/05 23:07:23 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

t_str	*ft_lstnew2_bonus(char *content)
{
	t_str	*element;

	element = malloc(sizeof(t_str));
	if (element == NULL)
		return (NULL);
	element->str = content;
	element->next = NULL;
	return (element);
}

void	ft_lstadd_back2_bonus(t_str **lst, t_str *new)
{
	t_str	*po;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	po = ft_last_bonus(*lst);
	po->next = new;
}

void	free_element_stack2(t_str **stack)
{
	t_str	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}