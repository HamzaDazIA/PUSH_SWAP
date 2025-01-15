/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:06:09 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/15 14:09:52 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int rra(t_stack  **stack_a)
{
    if (rev_rotate(stack_a) == 0)
        return (0);
    else
    {
        ft_putendl_fd("rra",1);
    }
    return (1);
}
int rrb(t_stack  **stack_b)
{
    if (rev_rotate(stack_b) == 0)
        return (0);
    else
    {
        ft_putendl_fd("rrb",1);
    }
    return (1);
}