/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_focntion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 22:28:10 by hdazia            #+#    #+#             */
/*   Updated: 2025/01/13 20:27:04 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//maybe timeout here :]
char **ft_join_all_argument(char **argv, int argc)
{
	int i;
	char *pointer;
	char **secand_pointer;
	char *save_address;
	
	pointer = ft_strdup("");
	i = 1;
	while (i < argc)
	{
		if (i > 1)
		{
			save_address = pointer;
			pointer = ft_strjoin(pointer, " ");
			free(save_address);
		}
		save_address = pointer;
		pointer = ft_strjoin(pointer, argv[i]);
		free(save_address);
		i++;		
	}
	secand_pointer = ft_split(pointer, ' ');
	// int j = 0;
	// while(secand_pointer[j])
	// {
    //     printf("Checking value: %s\n", secand_pointer[j]);
	// 	j++;
	// }
	free(pointer);
	return (secand_pointer);
}
