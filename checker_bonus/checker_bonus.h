/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:59:36 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/31 13:28:22 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BOUNS_H
# define CHECKER_BOUNS_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

char	**ft_check_input_bonus(int ac, char **av);
long	ft_atoi_2_bonus(const char *str, char **pointer);
long	ft_atoi_bonus(const char *str);
char	**ft_join_all_argument_bonus(char **argv, int argc);
int		ft_push(t_stack **stack_to, t_stack **stack_from);
int		ft_swap(t_stack **stack);
int		rotate(t_stack **stack);
int		rev_rotate(t_stack **stack);
void	free_split(char **pointer);
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
char	**ft_split_bouns(char const *s, char c);
int	ft_isdigit_bonus(int c);
void	ft_print_error_bonus(char *str);
void	ft_lstadd_back_bonus(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew_bonus(int content);
t_stack	*ft_last_bonus(t_stack *lst);
int	ft_lstsize_bonus(t_stack *lst);
void	ft_lstadd_front_bonus(t_stack **lst, t_stack *new);
void	ft_putendl_fd_bonus(char *s, int fd);

// get next line part 

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1337
# endif

char	*get_next_line(int fd);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *str);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_stored_string(char **str, int place_nline);
char	*ft_get(char **storing, int place_nline);
int		ft_find(const char *str);
void	*check_null(char **buffer, char **storing);

#endif