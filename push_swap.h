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
void ft_free_split(char **pointer);
int ra(t_stack  **stack_a);
int rb(t_stack  **stack_b);
int rr(t_stack  **stack_a, t_stack  **stack_b);
int rra(t_stack  **stack_a);
int rrb(t_stack  **stack_b);
void    rrr(t_stack **stack_a, t_stack **stack_b);
int pa(t_stack **stack_a, t_stack **stack_b);
int pb(t_stack **stack_b, t_stack **stack_a);
int sa(t_stack  **stack);
int sb(t_stack  **stack);
int ss(t_stack **stack_a, t_stack **stack_b);
void	index_stack(t_stack **stack);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew(void *content);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int	ft_lstsize(t_stack *lst);

#endif