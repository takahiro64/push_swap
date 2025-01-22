/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:50:30 by thine             #+#    #+#             */
/*   Updated: 2025/01/17 17:13:16 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	**ft_sort_a(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*tmp;

	while (*b)
	{
		tmp = *b;
		i = ft_select_operation_pa(*a, *b);
		while (i != -1)
		{
			if (i == ft_case_rarb_pa(*a, *b, tmp->nbr))
				i = ft_pa_rarb(a, b, tmp->nbr);
			else if (i == ft_case_rrarb_pa(*a, *b, tmp->nbr))
				i = ft_pa_rrarb(a, b, tmp->nbr);
			else if (i == ft_case_rarrb_pa(*a, *b, tmp->nbr))
				i = ft_pa_rarrb(a, b, tmp->nbr);
			else if (i == ft_case_rrarrb_pa(*a, *b, tmp->nbr))
				i = ft_pa_rrarrb(a, b, tmp->nbr);
			else
				tmp = tmp->next;
		}
	}
	return (a);
}

void	ft_sort_b(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*tmp;

	while (ft_lst_size(*a) > 3 && !ft_checksorted(*a))
	{
		tmp = *a;
		i = ft_select_operation_pb(*a, *b);
		while (i != -1)
		{
			if (i == ft_case_rarb_pb(*a, *b, tmp->nbr))
				i = ft_pb_rarb(a, b, tmp->nbr);
			else if (i == ft_case_rrarb_pb(*a, *b, tmp->nbr))
				i = ft_pb_rrarb(a, b, tmp->nbr);
			else if (i == ft_case_rarrb_pb(*a, *b, tmp->nbr))
				i = ft_pb_rarrb(a, b, tmp->nbr);
			else if (i == ft_case_rrarrb_pb(*a, *b, tmp->nbr))
				i = ft_pb_rrarrb(a, b, tmp->nbr);
			else
				tmp = tmp->next;
		}
	}
}

void	ft_sort_three(t_stack **a)
{
	if (ft_min(*a) == (*a)->nbr)
	{
		ft_rra(a);
		ft_sa(a);
	}
	else if (ft_max(*a) == (*a)->nbr)
	{
		ft_ra(a);
		if (ft_min(*a) != (*a)->nbr)
			ft_sa(a);
	}
	else
	{
		if (ft_index(*a, ft_max(*a)) == 1)
			ft_rra(a);
		else
			ft_sa(a);
	}
}
