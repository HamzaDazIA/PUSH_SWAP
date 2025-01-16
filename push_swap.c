/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 08:34:27 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/16 16:11:08 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "fcntl.h"

// void ll(){
//     system("leaks a.out");
//}

static void necessary_ft(t_stack **stack, char **av, int ac)
{
    char *new;
    char **pointerx2;
    int  i;
    
    i = 0;
    if (ac == 2)
        pointerx2 = ft_spilt(av[1], ' ');
    else
        pointerx2 = ft_join_all_argument(av, ac);
    while(pointerx2[i])
    {
        new = ft_lstnew(pointerx2[i]);
        ft_lstadd_back(stack, new);
        i++;
    }
    index_stack(stack);
    ft_free_split(pointerx2);
}

int main(int argc, char **argv)
{
    //atexit(ll);
    if(argc > 1)
    {
        t_stack **stack_a;
        t_stack **stack_b;

        ft_check_input(argc, argv);
        stack_a = malloc(sizeof(t_stack *));
        stack_b = malloc(sizeof(t_stack *));
        *stack_a = NULL;
        *stack_b = NULL;
        necessary_ft(stack_a, argv, argc);
        if (is_already_sortd)
    }

    return (0);
}
