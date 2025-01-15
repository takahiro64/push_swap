/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:11:17 by thine             #+#    #+#             */
/*   Updated: 2025/01/15 19:14:52 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_push_swap(t_stack **stack_a)
{
	t_stack *stack_b;
	int	i;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) ==2)
		ft_sa(a);
	else
	{
		stack_b = ft_push_b(stack_a);
		stack_a = ft_sort_a(stack_a, &stack_b);
		i = ft_index(*stack_a, ft_min(*stack_a));
		if (i < ft_lstsize(*stack_a) - i)
		{
			while ((*stack_a)->nbr != ft_min(*stack_a))
				ft_ra(stack_a);
		}
		else
		{
			while ((*stack_a)->nbr != ft_min(*stack_a))
				ft_rra(stack_a);
		}
	}
}

int	ft_select_operation_pb(t_stack *a, t_stack *b)
{
	int	i;
	t_stack *tmp;

	tmp = a;
	i = ft_case_rrarrb_pb(a, b, tmp->nbr); 
	while (tmp)
	{
		if (i > ft_case_rarb_pb(a, b, tmp->nbr))
			i = ft_case_rarb_pb(a, b, tmp->nbr);
		if (i > ft_case_rrarb_pb(a, b, tmp->nbr))
			i = ft_case_rrarb_pb(a, b, tmp->nbr);
		if (i > ft_case_rarrb_pb(a, b, tmp->nbr))
			i = ft_case_rarrb_pb(a, b, tmp->nbr);
		if (i > ft_case_rrarrb_pb(a, b, tmp->nbr))
			i = ft_case_rrarrb_pb(a, b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_select_operation_pa(t_stack *a, t_stack *b)
{
	int	i;
	t_stack *tmp;

	tmp = b;
	i = ft_case_rrarrb_pa(a, b, tmp->nbr); 
	while (tmp)
	{
		if (i > ft_case_rarb_pa(a, b, tmp->nbr))
			i = ft_case_rarb_pa(a, b, tmp->nbr);
		if (i > ft_case_rrarb_pa(a, b, tmp->nbr))
			i = ft_case_rrarb_pa(a, b, tmp->nbr);
		if (i > ft_case_rarrb_pa(a, b, tmp->nbr))
			i = ft_case_rarrb_pa(a, b, tmp->nbr);
		if (i > ft_case_rrarrb_pa(a, b, tmp->nbr))
			i = ft_case_rrarrb_pa(a, b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}
