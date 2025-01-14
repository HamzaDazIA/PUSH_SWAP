/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 02:10:36 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/13 19:17:23 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_print_error(char *str)
{
    ft_putendl_fd(str, 1);
    exit(1);
}

static int ft_is_duplicate(long value, char **av, int i)
{
    i++;
    while (av[i])
    {
        if (ft_atoi(av[i]) == value)
            return (0);
        i++;
    }
    return (1);
}

static int ft_is_number(char *str)
{
    int i = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;
    if (str[i] == '\0')
        return (0);
    while(str[i])
    {
        if(ft_isdigit(str[i]) == 0)
            return (0);
        i++;
    }
    return (1);
}

static void ft_free_split(char **pointer)
{
    int i = 0;

    while (pointer[i])
    {
        free(pointer[i]);
        i++;
    }
    free(pointer);
}
void ft_check_input(int ac, char **av)
{
    long value;
    int i;
    char **pointer;

    if(ac == 2)
    {
        i = 0;
        pointer = ft_split(av[1], ' ');
    }
    else
    {
        i = 0;
        pointer = ft_join_all_argument(av, ac);
        //pointer = av;
    }
    while(pointer[i])
    {
        value = ft_atoi(pointer[i]);
        printf("Checking value: %ld\n", value); // Debugging print
        if (ft_is_number(pointer[i]) == 0)
            ft_print_error("Error: Invalid number");
        if (ft_is_duplicate(value, pointer, i) == 0)
            ft_print_error("Error: Duplicate value");
        if (value > INT_MAX || value < INT_MIN)
            ft_print_error("Error: Value out of range");
        i++;
    }
    ft_free_split(pointer);
}
