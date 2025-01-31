/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:58:14 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/31 12:02:22 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	free_split(char **pointer)
{
	int	i;

	i = 0;
	while (pointer[i])
	{
		free(pointer[i]);
		i++;
	}
	free(pointer);
}

void	free_element_stack(t_stack **stack)
{
	t_stack	*tmp;

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

static void	put_elemen_stack(t_stack **stack, char **pointer)
{
	t_stack	*new;
	int		i;

	i = 0;
	while (pointer[i])
	{
		new = ft_lstnew(ft_atoi(pointer[i]));
		if (new == NULL)
		{
			free_split(pointer);
			exit(-1);
		}
		ft_lstadd_back(stack, new);
		i++;
	}
	free_split(pointer);
}
int	main(int argc, char **argv)
{
	t_stack	**stack_a;
	t_stack	**stack_b;
	char	**pointer;

	if (argc > 1)
	{
		pointer = ft_check_input_bonus(argc, argv);
		stack_a = malloc(sizeof(t_stack *));
		if (stack_a == NULL)
			return (free_split(pointer), 1);
		stack_b = malloc(sizeof(t_stack *));
		if (stack_b == NULL)
			return (free(stack_a), free_split(pointer), 1);
		*stack_a = NULL;
		*stack_b = NULL;
		put_elemen_stack(stack_a, pointer);
        
		free_element_stack(stack_a);
		free_element_stack(stack_b);
		free(stack_a);
		free(stack_b);
	}
	return (0);
}