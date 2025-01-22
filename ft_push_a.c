/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:27:04 by thine             #+#    #+#             */
/*   Updated: 2025/01/17 17:12:08 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pa_rarb(t_stack **a, t_stack **b, int nbr)
{
	while ((*b)->nbr != nbr && ft_search_insert_position_a(*a, nbr) != 0)
		ft_rr(a, b);
	while ((*b)->nbr != nbr)
		ft_rb(b);
	while (ft_search_insert_position_a(*a, nbr) != 0)
		ft_ra(a);
	ft_pa(a, b);
	return (-1);
}

int	ft_pa_rrarb(t_stack **a, t_stack **b, int nbr)
{
	while ((*b)->nbr != nbr)
		ft_rb(b);
	while (ft_search_insert_position_a(*a, nbr) != 0)
		ft_rra(a);
	ft_pa(a, b);
	return (-1);
}

int	ft_pa_rarrb(t_stack **a, t_stack **b, int nbr)
{
	while ((*b)->nbr != nbr)
		ft_rrb(b);
	while (ft_search_insert_position_a(*a, nbr) != 0)
		ft_ra(a);
	ft_pa(a, b);
	return (-1);
}

int	ft_pa_rrarrb(t_stack **a, t_stack **b, int nbr)
{
	while ((*b)->nbr != nbr && ft_search_insert_position_a(*a, nbr) != 0)
		ft_rrr(a, b);
	while ((*b)->nbr != nbr)
		ft_rrb(b);
	while (ft_search_insert_position_a(*a, nbr) != 0)
		ft_rra(a);
	ft_pa(a, b);
	return (-1);
}
