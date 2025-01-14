#include "push_swap.h"
#include <stdio.h>

#include "fcntl.h"

void ll(){
    system("leaks a.out");
}


int main(int argc, char **argv)
{
    atexit(ll);
    if(argc > 1)
    {
        t_stack **stack_a;
        t_stack **stack_b;

        ft_check_input(argc, argv);
        
        stack_a = malloc(sizeof(t_stack *));
        stack_b = malloc(sizeof(t_stack *));
        
        printf("ok");
    }

    return (0);
}