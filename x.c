static int	applying_rules(t_stack **stack_a, t_stack **stack_b)
{
	t_str	*s;
	t_str	*tmp;
	int		size_b;
	char	*str;

	s = NULL;  // Initialize the linked list pointer
	str = get_next_line(0);
	while (str)
	{
		ft_lstadd_back2_bonus(&s, ft_lstnew2_bonus(str));
		free(str);
		str = get_next_line(0);
	}

	tmp = s; // Keep track of the head of the list
	while (tmp)
	{
		if (do_this_rules(stack_a, stack_b, tmp->str) == -1)
		{
			free_element_stack2(&s);
			return (-1);
		}
		tmp = tmp->next;
	}
	free_element_stack2(&s); // Free the instruction list after execution

	size_b = ft_lstsize_bonus(*stack_b);
	if (size_b == 0 && is_already_sorted(*stack_a))
		return (1);
	return (0);
}
