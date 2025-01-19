/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 08:34:27 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/19 23:27:26 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "fcntl.h"

void ll(){
    system("leaks a.out");
}
// Part debagin code 
void print_stack(t_stack *stack, const char *stack_name)
{
    printf("%s: ", stack_name);
    while (stack)
    {
        printf("%d -> ", stack->value);
        stack = stack->next;
    }
    printf("NULL\n");
}
void print_stack_i(t_stack *stack, const char *stack_name)
{
    printf("%s: ", stack_name);
    while (stack)
    {
        printf("%d -> ", stack->index);
        stack = stack->next;
    }
    printf("NULL\n");
}
static void necessary_ft(t_stack **stack, char **av, int ac)
{
    t_stack *new;
    int i;
    char **pointer;

    i = 0;
    if(ac == 2)
        pointer = ft_split(av[1], ' ');
    else
        pointer = ft_join_all_argument(av, ac);
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

        ft_check_input(argc, argv);
        stack_a = malloc(sizeof(t_stack *));
        stack_b = malloc(sizeof(t_stack *));
        *stack_a = NULL;
        *stack_b = NULL;
        necessary_ft(stack_a, argv, argc);
        if (is_already_sortd(*stack_a) == 1)
        {
            printf("is already sortd");
        }
        else
        {
            sortd_element(stack_a, stack_b);
        }
        // print_stack(*stack_a, "Stack A");
        // print_stack_i(*stack_a, "index Stack A");
        // print_stack(*stack_b, "Stack B");
        // print_stack_i(*stack_b, "index Stack B");
    }

    return (0);
}
