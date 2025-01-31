/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_focntion3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 08:27:19 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/31 08:02:37 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static char	*safe_strjoin(char *str, char *append)
{
	char	*new_str;

	new_str = ft_strjoin(str, append);
	free(str);
	if (!new_str)
		return (NULL);
	return (new_str);
}

static char	*build_joined_str(int argc, char **argv)
{
	char	*joined;
	int		i;

	joined = ft_strdup("");
	if (!joined)
		return (NULL);
	i = 0;
	while (++i < argc)
	{
		if (i > 1)
		{
			joined = safe_strjoin(joined, " ");
			if (!joined)
				return (NULL);
		}
		joined = safe_strjoin(joined, argv[i]);
		if (!joined)
			return (NULL);
	}
	return (joined);
}

char	**ft_join_all_argument(char **argv, int argc)
{
	char	*joined_str;
	char	**result;

	joined_str = build_joined_str(argc, argv);
	if (!joined_str)
		return (NULL);
	result = ft_split(joined_str, ' ');
	free(joined_str);
	if (!result)
		return (NULL);
	return (result);
}

void	ft_print_error(char *str)
{
	ft_putendl_fd(str, 1);
	exit(-1);
}

void	rotate_stack_a(t_stack **stack_a)
{
	int	smallest_pos;
	int	stack_size;
	int	middle_pos;
	int	rotations;

	smallest_pos = find_smallest_position(stack_a);
	stack_size = ft_lstsize(*stack_a);
	middle_pos = stack_size / 2;
	if (smallest_pos <= middle_pos)
	{
		rotations = smallest_pos;
		while (rotations-- > 0)
			ra(stack_a);
	}
	else
	{
		rotations = stack_size - smallest_pos;
		while (rotations-- > 0)
			rra(stack_a);
	}
}
