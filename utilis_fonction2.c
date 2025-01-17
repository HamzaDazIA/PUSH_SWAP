/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_fonction2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:53:02 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/17 14:15:03 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_already_sortd(t_stack *stack)
{
    while (stack && stack->next) {
        if (stack->value > stack->next->value)
            return 0;  // Not sorted
        stack = stack->next;
    }
    return 1;  // Sorted
}
