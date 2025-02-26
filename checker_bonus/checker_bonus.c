/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:58:14 by hdazia            #+#    #+#             */
/*   Updated: 2025/02/13 12:58:54 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	free_stack(t_stack **stack)
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

static int	is_already_sorted(t_stack *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

static void	put_element_stack(t_stack **stack, char **pointer)
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
			free_stack(stack);
			exit(1);
		}
		ft_lstadd_back_bonus(stack, new);
		i++;
	}
	free_split_bonus(pointer);
}

static int	applying_rules(t_stack **stack_a, t_stack **stack_b)
{
	t_str	*s;
	char	*str;
	t_str	*tmp;

	s = NULL;
	str = get_next_line(0);
	while (str)
	{
		if (check_input_rules(str) == -1)
			return (free(str), free_element_stack_bonus2(&s), -1);
		ft_lstadd_back2_bonus(&s, ft_lstnew2_bonus(str));
		free(str);
		str = get_next_line(0);
	}
	tmp = s;
	while (tmp)
	{
		if (do_this_rules(stack_a, stack_b, tmp->str) == -1)
			return (free_element_stack_bonus2(&s), -1);
		tmp = tmp->next;
	}
	free_element_stack_bonus2(&s);
	if (ft_lstsize_bonus(*stack_b) == 0 && is_already_sorted(*stack_a))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**pointer;
	int		result;

	if (argc < 2)
		exit(1);
	pointer = ft_check_input_bonus(argc, argv);
	stack_a = NULL;
	stack_b = NULL;
	put_element_stack(&stack_a, pointer);
	result = applying_rules(&stack_a, &stack_b);
	if (result == -1)
		write(2, "Error\n", 6);
	else if (result == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
