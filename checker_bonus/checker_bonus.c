/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:58:14 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/31 19:06:15 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
static int	is_already_sortd(t_stack *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

static void	put_elemen_stack(t_stack **stack, char **pointer)
{
	t_stack	*new;
	int		i;

	i = 0;
	while (pointer[i])
	{
		new = ft_lstnew_bonus(ft_atoi_bonus(pointer[i]));
		if (new == NULL)
		{
			free_split_bonus(pointer);
			exit(-1);
		}
		ft_lstadd_back_bonus(stack, new);
		i++;
	}
	free_split_bonus(pointer);
}

int	applying_rules(t_stack **stack_a, t_stack **stack_b, char *str_input)
{
	int	size_b;
	
	str_input = get_next_line(0);
	while (str_input)
	{
		if (do_this_rules(stack_a, stack_b, str_input) == -1)
			return (free(str_input), -1);
		
		free(str_input);
		str_input = get_next_line(0);
	}
	size_b = ft_lstsize_bonus(*stack_b);
	if (size_b == 0 && !is_already_sortd(stack_b) == 1)
		return(1);
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	**stack_a;
	t_stack	**stack_b;
	char	**pointer;
	char	*str_input;
	
	if (argc < 2 )
		exit(1);
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
	if (applying_rules(stack_a, stack_b, str_input) == 1)
		write(1, "OK", 2);
	else if (applying_rules(stack_a, stack_b, str_input) == -1)
		write(1, "Error", 5);
	else if (applying_rules(stack_a, stack_b, str_input) == 0)
		write(1, "KO", 2);
	return (free_element_stack(stack_a), free_element_stack(stack_b), free(stack_a), free(stack_b), 0);
}
