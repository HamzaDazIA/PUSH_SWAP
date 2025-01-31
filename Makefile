NAME = push_swap

SRC = src/cost_elemrnt.c src/ft_sort_elements.c src/main.c src/move_element.c \
	  rules/ft_push.c rules/ft_rev_rotate.c rules/ft_rotate.c rules/ft_rules.c \
	  rules/ft_swap.c rules/rules.c rules/rules_rev.c \
	  utilid_fonctions/ft_atoi.c utilid_fonctions/ft_atoi2.c utilid_fonctions/ft_isdigit.c \
	  utilid_fonctions/ft_lis.c utilid_fonctions/ft_putendl_fd.c utilid_fonctions/ft_split.c \
	  utilid_fonctions/ft_strdup.c utilid_fonctions/ft_strjoin.c utilid_fonctions/ft_strlcpy.c \
	  utilid_fonctions/ft_strlen.c utilid_fonctions/utilis_focntion.c \
	  utilid_fonctions/utilis_focntion3.c utilid_fonctions/utilis_fonction2.c checker/checker.c

OBJS = $(SRC:.c=.o)
CC = cc -Wall -Werror -Wextra
RM = rm -f

all: $(NAME)

%.o: %.c push_swap.h
	$(CC) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re