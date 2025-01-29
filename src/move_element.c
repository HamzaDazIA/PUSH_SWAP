/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 00:43:32 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/29 06:31:55 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void     rrr_costs(int *cost_a, int *cost_b, t_stack  **stack_a, t_stack  **stack_b)
{
    while ((*cost_a) < 0 && (*cost_b) < 0)
    {
        (*cost_a)++;
        (*cost_b)++;
        rrr(stack_a, stack_b);
    }
    
}
static void rr_costs(int *cost_a, int *cost_b, t_stack  **stack_a, t_stack  **stack_b)
{
    while ((*cost_a) > 0 && (*cost_b) > 0)
    {
        (*cost_a)--;
        (*cost_b)--;
        rr(stack_a, stack_b);      
    }
}
static void ra_or_rra_costs(int *cost_a , t_stack  **stack_a)
{
    while(*cost_a)
    {
        if ((*cost_a) > 0)
        {
            ra(stack_a);
            (*cost_a)--;
        }
        else if ((*cost_a) < 0)
        {
            rra(stack_a);
            (*cost_a)++;
        }
    }
}
static void rb_or_rrb_cost(int *cost_b, t_stack  **stack_b)
{
        while(*cost_b)
    {
        if ((*cost_b) > 0)
        {
            rb(stack_b);
            (*cost_b)--;
        }
        else if ((*cost_b) < 0)
        {
            rrb(stack_b);
            (*cost_b)++;
        }
    }
}
void    move_element(int    cost_a, int    cost_b, t_stack **stack_a, t_stack   **stack_b)
{
    if (cost_a < 0  && cost_b < 0)
    {
        rrr_costs(&cost_a, &cost_b, stack_a, stack_b);
    }
    else if (cost_a > 0 && cost_b > 0)
    {
        rr_costs(&cost_a, &cost_b, stack_a, stack_b);
    }
    // cost a check if we do rotate or revers rotate 
    ra_or_rra_costs(&cost_a, stack_a);
    rb_or_rrb_cost(&cost_b, stack_b);
    // do the same to stack b;
    pa(stack_a, stack_b);
}