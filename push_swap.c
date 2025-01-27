/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 08:34:27 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/27 15:15:06 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "fcntl.h"

void ll(){
    system("leaks a.out");
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

static void necessary_ft(t_stack **stack, char **av, int ac, char **pointer)
{
    t_stack *new;
    int i;

    i = 0;
    while(pointer[i])
    {
        new = ft_lstnew(ft_atoi(pointer[i]));
        ft_lstadd_back(stack, new);
        i++;
    }
    index_stack(stack); 
    ft_free_split(pointer);
}

int main(int argc, char **argv)
{
   // atexit(ll);
    if(argc > 1)
    {
        t_stack **stack_a;
        t_stack **stack_b;
        char **pointer;
        
        pointer = ft_check_input(argc, argv); // no leaks 
        stack_a = malloc(sizeof(t_stack *));
        if (stack_a == NULL)
            return(ft_free_split(pointer), 1);
        stack_b = malloc(sizeof(t_stack *));    
        if (stack_b == NULL)
            return(free(stack_a), ft_free_split(pointer), 1);
        *stack_a = NULL;
        *stack_b = NULL;
        necessary_ft(stack_a, argv, argc, pointer);
        if (is_already_sortd(*stack_a) == 0)
            sortd_element(stack_a, stack_b);
        free_stack(stack_a);
        free_stack(stack_b);
        free (stack_a);
        free (stack_b);
    }
    return (0);
}
