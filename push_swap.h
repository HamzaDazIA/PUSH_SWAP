#ifndef PUSH_SWAP
#define PUSH_SWAP
# include <unistd.h>
#include "libft-42/libft.h"
#include <limits.h>
#include <stdio.h>

typedef struct s_stack
{
    int value;
    int index;
    int pos;
    int target_pos;
    int cost_a;
    int cost_b;
    struct s_stack *next;
} t_stack;

void ft_check_input(int ac, char **av);

#endif