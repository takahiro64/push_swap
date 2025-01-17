/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:31:06 by thine             #+#    #+#             */
/*   Updated: 2025/01/17 17:12:14 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_pb_rarb(t_stack **a, t_stack **b, int nbr)
{
	while ((*a)->nbr != nbr && ft_search_insert_position_b(*b, nbr) != 0)
		ft_rr(a, b);
	while ((*a)->nbr != nbr)
		ft_ra(a);
	while (ft_search_insert_position_b(*b, nbr) != 0)
		ft_rb(b);
	ft_pb(a, b);
	return(-1);
}

int	ft_pb_rrarb(t_stack **a, t_stack **b, int nbr)
{
	while ((*a)->nbr != nbr)
		ft_rra(a);
	while (ft_search_insert_position_b(*b, nbr) != 0)
		ft_rb(b);
	ft_pb(a, b);
	return(-1);
}

int	ft_pb_rarrb(t_stack **a, t_stack **b, int nbr)
{
	while ((*a)->nbr != nbr)
		ft_ra(a);
	while (ft_search_insert_position_b(*b, nbr) != 0)
		ft_rrb(b);
	ft_pb(a, b);
	return(-1);
}

int	ft_pb_rrarrb(t_stack **a, t_stack **b, int nbr)
{
	while ((*a)->nbr != nbr && ft_search_insert_position_b(*b, nbr) != 0)
		ft_rrr(a, b);
	while ((*a)->nbr != nbr)
		ft_rra(a);
	while (ft_search_insert_position_b(*b, nbr) != 0)
		ft_rrb(b);
	ft_pb(a, b);
	return(-1);
}

t_stack	*ft_push_b(t_stack **a)
{
	t_stack *b;

	b = NULL;
	if (ft_lst_size(*a) > 3 && !ft_checksorted(*a))
		ft_pb(a, &b);
	if (ft_lst_size(*a) > 3 && !ft_checksorted(*a))
		ft_pb(a, &b);
	if (ft_lst_size(*a) > 3 && !ft_checksorted(*a))
		ft_sort_b(a, &b);
	if (!ft_checksorted(*a))
		ft_sort_three(a);
	return (b);
}
