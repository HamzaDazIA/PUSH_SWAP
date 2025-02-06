NAME = push_swap
NAME_BONUS = checker

SRC = src/cost_elemrnt.c src/ft_sort_elements.c src/main.c src/move_element.c \
      rules/ft_push.c rules/ft_rev_rotate.c rules/ft_rotate.c rules/ft_rules.c \
      rules/ft_swap.c rules/rules.c rules/rules_rev.c \
      utilid_fonctions/ft_atoi.c utilid_fonctions/ft_atoi2.c utilid_fonctions/ft_isdigit.c \
      utilid_fonctions/ft_lis.c utilid_fonctions/ft_putendl_fd.c utilid_fonctions/ft_split.c \
      utilid_fonctions/ft_strdup.c utilid_fonctions/ft_strjoin.c utilid_fonctions/ft_strlcpy.c \
      utilid_fonctions/ft_strlen.c utilid_fonctions/utilis_focntion.c \
      utilid_fonctions/utilis_focntion3.c utilid_fonctions/utilis_fonction2.c checke_input/checker.c 

BONUS =  checker_bonus/check_input_bonus.c checker_bonus/checker_bonus.c checker_bonus/do_relus.c \
	checker_bonus/ft_atoi2_bonus.c checker_bonus/ft_atoi_bonus.c checker_bonus/ft_isdigit_bonus.c checker_bonus/ft_lis_bonus.c \
	checker_bonus/ft_push_bonus.c checker_bonus/ft_putendl_fd_bonus.c checker_bonus/ft_rev_rotate_bonus.c checker_bonus/ft_rotate_bonus.c checker_bonus/ft_rules_bonus.c \
	checker_bonus/ft_split.c checker_bonus/ft_strjoin_bonus.c checker_bonus/ft_swap_bonus.c checker_bonus/get_next_line.c checker_bonus/get_next_line_utils.c checker_bonus/rules_bonus.c\
 	checker_bonus/rules_rev_bonus.c checker_bonus/utili_fonction_bonus.c  checker_bonus/utilis_fonction2_bonus.c checker_bonus/utilis_fonction3_bonus.c \

OBJS = $(SRC:.c=.o)
OBJSB = $(BONUS:.c=.o)

CC = cc -Wall -Werror -Wextra
RM = rm -f

all: $(NAME)

%.o: %.c push_swap.h checker_bonus/checker_bonus.h
	$(CC) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

bonus: $(OBJSB)
	$(CC) $(OBJSB) -o $(NAME_BONUS)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY:  clean 
