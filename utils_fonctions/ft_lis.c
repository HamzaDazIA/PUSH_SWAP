/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:51:11 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/16 11:36:25 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*po;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	po = ft_lstlast(*lst);
	po->next = new;
}
t_stack	*ft_lstnew(void *content)
{
	t_stack	*element;

	element = malloc(sizeof(t_stack));
	if (element == NULL)
		return (NULL);
	element->value = content;
	element->next = NULL;
	return (element);
}
t_stack	*ft_lstlast(t_stack *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
int	ft_lstsize(t_stack *lst)
{
	t_stack	*count;
	int		i;

	count = lst;
	i = 0;
	while (count != NULL)
	{
		count = count->next;
		i++;
	}
	return (i);
}