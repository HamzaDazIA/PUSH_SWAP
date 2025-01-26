/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_focntion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 22:28:10 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/26 14:36:34 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//maybe timeout here :]
char **ft_join_all_argument(char **argv, int argc, int i)
{
	char *pointer;
	char **s_p;
	char *save_address;
	
	pointer = ft_strdup("");
	if (check_return_splite(pointer) == -1)
		return (NULL);
	i = 0;
	while (++i < argc)
	{
        save_address = pointer;
        if (i > 1)
            pointer = ft_strjoin(pointer, " ");
        if (check_return_splite(pointer) == -1)
            return (free(save_address), NULL);
        free(save_address);
        save_address = pointer;
        pointer = ft_strjoin(pointer, argv[i]);
        if (check_return_splite(pointer) == -1)
            return (free(save_address), NULL);
        free(save_address);
	}
    s_p = ft_split(pointer, ' ');
    free(pointer);
    if (check_return_splite(s_p) == -1)
        return (NULL);
    return (s_p);
}

void ft_free_split(char **pointer)
{
    int i = 0;

    while (pointer[i])
    {
        free(pointer[i]);
        i++;
    }
    free(pointer);
}

static void sort_arry(int size, int *arry)
{
	int j;
	int	k;
	int tmp;

	j = 0;
	while (j < size - 1)
	{
		k = j + 1;
		while(k < size)
		{
			if (arry[j] > arry[k])
			{
				tmp = arry[k];
				arry[k] = arry[j];
				arry[j] = tmp;
			}
			k++;	
		}
		j++;
	}
}


static void assign_indices(t_stack **stack, int size, int *arry)
{
	int i;
	t_stack	*head;

	head = *stack;
	while(head)
	{
		i = -1;
		while (i++ < size)
		{
			if (head->value == arry[i])
			{
				head->index = i + 1;
				break;
			}
		}
		head = head ->next;
	}
}

void	index_stack(t_stack **stack)
{
	t_stack	*head;
	int *arry;
	int	i;
	int size;
	
	size = ft_lstsize(*stack);
	arry = malloc(size*sizeof(int));
	if (check_return_splite(arry) == -1)
        return;
	head = *stack;
	i = 0;
	while (i < size)
	{
		arry[i++] = head->value;
		head = head->next;
	}
	sort_arry(size, arry);
	assign_indices(stack, size, arry);
	
	free (arry);	
}