/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_relus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:24:26 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/31 18:31:19 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int comper(char *str_input, char *str_rules)
{
    int i;

    i = 0;
    while (str_input[i])
    {
        if (str_input[i] != str_rules[i])
            return (0);
        i++;
    }
    return (1);
}
int  do_this_rules(stack_a, stack_b, str_input)
{
    if (comper(str_input, "pa\n") == 1)
        pa_bonus(stack_a, stack_b);
    else  if (comper(str_input, "pb\n") == 1)
        pb_bonus(stack_b, stack_a);
    else  if (comper(str_input, "sa\n") == 1)
        sa_bonus(stack_a);
    else  if (comper(str_input, "sb\n") == 1)
        sb_bonus(stack_b);
    else  if (comper(str_input, "ss\n") == 1)
        ss_bonus(stack_a, stack_b);
    else  if (comper(str_input, "ra\n") == 1)
        ra_bonus(stack_a);
    else  if (comper(str_input, "rb\n") == 1)
        rb_bonus(stack_b);
    else if (comper(str_input, "rr\n") == 1)
        rr_bonus(stack_a, stack_b);
    else  if (comper(str_input, "rra\n") == 1)
        rra_bonus(stack_a);
    else  if (comper(str_input, "rrb\n") == 1)
        rrb_bonus(stack_b);
    else  if (comper(str_input, "rrr\n") == 1)
        rrr_bonus(stack_a, stack_b);
    else
        return (-1);        
}
