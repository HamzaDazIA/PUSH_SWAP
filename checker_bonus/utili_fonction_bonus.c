/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utili_fonction_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:15:25 by hdazia            #+#    #+#             */
/*   Updated: 2025/02/10 15:47:41 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_print_error_bonus(char *str)
{
	ft_putendl_fd_bonus(str, 2);
	exit(1);
}

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

char	**ft_join_all_argument_bonus(char **argv, int argc)
{
	char	*joined_str;
	char	**result;

	joined_str = build_joined_str(argc, argv);
	if (!joined_str)
		return (NULL);
	result = ft_split_bonus(joined_str, ' ');
	free(joined_str);
	if (!result)
		return (NULL);
	return (result);
}

void	free_split_bonus(char **pointer)
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
