/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_fonction2_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:13:14 by hdazia            #+#    #+#             */
/*   Updated: 2025/02/06 17:41:46 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
	po = ft_last2_bonus(*lst);
	po->next = new;
}

t_str	*ft_lstnew2_bonus(char *content)
{
	t_str	*element;

	element = malloc(sizeof(t_str));
	if (element == NULL)
		return (NULL);
	element->str = ft_strdup_bonus(content);
	if (!element->str)
	{
		free(element);
		return (NULL);
	}
	element->next = NULL;
	return (element);
}

t_str	*ft_last2_bonus(t_str *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
