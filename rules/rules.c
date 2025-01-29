/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:19:12 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/29 06:32:18 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ra(t_stack  **stack_a)
{
    if (rotate(stack_a) == 0)
        return (0);
    else
    {
        ft_putendl_fd("ra",1);
    }
    return (1);
}

int rb(t_stack  **stack_b)
{
    if (rotate(stack_b) == 0)
        return (0);
    else
    {
        ft_putendl_fd("rb",1);
    }
    return (1);
}
//khasni takid men dek if statmunt.

int rr(t_stack  **stack_a, t_stack  **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
    ft_putendl_fd("rr",1);
    return (1);
}
