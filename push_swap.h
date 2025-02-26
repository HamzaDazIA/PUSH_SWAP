/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 08:07:43 by hdazia            #+#    #+#             */
/*   Updated: 2025/02/13 12:44:25 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

char	**ft_check_input(int ac, char **av);
long	ft_atoi_2(const char *str, char **pontoir);
long	ft_atoi(const char *str);
char	**ft_join_all_argument(char **argv, int argc);
int		ft_push(t_stack **stack_to, t_stack **stack_from);
int		ft_swap(t_stack **stack);
int		rotate(t_stack **stack);
int		rev_rotate(t_stack **stack);
void	ft_free_split(char **pointer);
int		ra(t_stack **stack_a);
int		rb(t_stack **stack_b);
int		rr(t_stack **stack_a, t_stack **stack_b);
int		rra(t_stack **stack_a);
int		rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
int		pa(t_stack **stack_a, t_stack **stack_b);
int		pb(t_stack **stack_b, t_stack **stack_a);
int		sa(t_stack **stack);
int		sb(t_stack **stack);
int		ss(t_stack **stack_a, t_stack **stack_b);
void	index_stack(t_stack **stack);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew(int ontent);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_lstsize(t_stack *lst);
int		is_already_sortd(t_stack *stack);
void	sortd_element(t_stack **stack_a, t_stack **stack_b);
void	position(t_stack **stack);
void	push_numbers_to_stack_b(t_stack **stack_a, t_stack **stack_b);
void	target_pos_and_pos(t_stack **stack_a, t_stack **stack_b);
void	cost_element(t_stack **stack_a, t_stack **stack_b);
int		ft_abs(int nbr);
void	move_element(int cost_a, int cost_b, t_stack **stack_a,
			t_stack **stack_b);
void	calcul_cost_push(t_stack **stack_a, t_stack **stack_b);
void	rotate_stack_a(t_stack **stack_a);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
void	ft_putendl_fd(char *s, int fd);
int		ft_isdigit(int c);
void	ft_print_error(char *str);
int		find_smallest_position(t_stack **stack_a);

#endif