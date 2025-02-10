/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_fonction3_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:55:07 by hdazia            #+#    #+#             */
/*   Updated: 2025/02/10 15:49:17 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

size_t	ft_strlen_bonus(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	free_element_stack_bonus2(t_str **stack)
{
	t_str	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free((*stack)->str);
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

char	*ft_strdup_bonus(const char *s1)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(s1);
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s1, len + 1);
	return (dst);
}

int	check_input_rules(char *str_input)
{
	if (ft_strcmp(str_input, "pa\n") == 0)
		return (1);
	else if (ft_strcmp(str_input, "pb\n") == 0)
		return (1);
	else if (ft_strcmp(str_input, "sa\n") == 0)
		return (1);
	else if (ft_strcmp(str_input, "sb\n") == 0)
		return (1);
	else if (ft_strcmp(str_input, "ss\n") == 0)
		return (1);
	else if (ft_strcmp(str_input, "ra\n") == 0)
		return (1);
	else if (ft_strcmp(str_input, "rb\n") == 0)
		return (1);
	else if (ft_strcmp(str_input, "rr\n") == 0)
		return (1);
	else if (ft_strcmp(str_input, "rra\n") == 0)
		return (1);
	else if (ft_strcmp(str_input, "rrb\n") == 0)
		return (1);
	else if (ft_strcmp(str_input, "rrr\n") == 0)
		return (1);
	else
		return (-1);
	return (1);
}
