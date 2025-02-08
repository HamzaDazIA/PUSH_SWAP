/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:07:39 by hdazia            #+#    #+#             */
/*   Updated: 2025/02/07 13:54:38 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	ft_perror_free(char **pointer)
{
	ft_putendl_fd_bonus("Error", 1);
	free_split_bonus(pointer);
	exit(1);
}

long	ft_atoi_2_bonus(const char *str, char **pointer)
{
	int		sign;
	long	rs;

	sign = 1;
	rs = 0;
	while (*str != '\0' && ((*str >= 9 && *str <= 13) || (*str == 32)))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (rs > (LONG_MAX - (*str - '0')) / 10)
			ft_perror_free(pointer);
		rs = rs * 10 + (*str - '0');
		str++;
	}
	return (rs * sign);
}
