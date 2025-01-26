/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_focntion3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 08:27:19 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/24 16:24:01 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    check_element_perror(char **p)
{
    long value;
    int i;

    while (p[i])
    {
        value = ft_atoi_2(p[i], p);
        if (ft_is_number(p[i]) == 0)
            ft_print_error("Error: Invalid number");
        if (ft_is_duplicate(value, p, i) == 0)
            ft_print_error("Error: Duplicate value");
        if (value > INT_MAX || value < INT_MIN)
            ft_print_error("Error: Value out of range");
        i++;
    }
}