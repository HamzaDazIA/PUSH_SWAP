#include "push_swap.h"

void    ft_print_error(char *str)
{
    ft_putendl_fd(str,1);
    exit(1);
}
int    ft_is_redunadant(int value, char **av, int i)
{
    i++;
    while(av[i])
    {
        if (ft_atoi(av[i]) == value)
            return 0;
        i++;
    }
    return (1);
}
int  ft_is_number(char *str)
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
void ft_check_input(int ac, char **av)
{
    int value;
    int i;
    char **pointer;

    if(ac == 2)
    {
        i = 0;
        pointer = ft_split(av[1], ' ');
    }
    else
    {
        i = 1;
        pointer = av;
    }
    while(pointer[i])
    {
        value = ft_atoi(pointer[i]);
        if (ft_is_number(pointer[i]) == 0)
            ft_print_error("Error");
        if (ft_is_redunadant(value, pointer, i) == 0)
            ft_print_error("Error");
        if (value > INT_MAX || value < INT_MAX)
            ft_print_error("Error");
        i++;
    }
    if(ac == 2)
        free(pointer);
}
