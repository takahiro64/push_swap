/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver_utils_pa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:30:18 by thine             #+#    #+#             */
/*   Updated: 2025/01/17 17:12:59 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb_pa(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = ft_search_insert_position_a(a, nbr);
	if (i < ft_index(b, nbr))
		i = ft_index(b, nbr);
	return (i);
}

int	ft_case_rrarb_pa(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = 0;
	if (ft_search_insert_position_a(a, nbr))
		i = ft_lst_size(a) - ft_search_insert_position_a(a, nbr);
	i += ft_index(b, nbr);
	return (i);
}

int	ft_case_rarrb_pa(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = 0;
	if (b->nbr != nbr)
		i = ft_lst_size(b) - ft_index(b, nbr);
	i += ft_search_insert_position_a(a, nbr);
	return (i);
}

int	ft_case_rrarrb_pa(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = 0;
	if (ft_search_insert_position_a(a, nbr))
		i = ft_lst_size(b) - ft_search_insert_position_a(a, nbr);
	if (a->nbr != nbr && i < (ft_lst_size(a) - ft_index(a, nbr)))
		i = ft_lst_size(a) - ft_index(a, nbr);
	return (i);
}
