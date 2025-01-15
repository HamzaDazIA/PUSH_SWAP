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
char **ft_join_all_argument(char **argv, int argc);
int ft_push(t_stack **stack_to, t_stack   **stack_from);
int ft_swap(t_stack **stack);
int rotate(t_stack **stack);
int rev_rotate(t_stack  **stack);
#endif