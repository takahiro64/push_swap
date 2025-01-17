/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver_utils_pb.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:51:22 by thine             #+#    #+#             */
/*   Updated: 2025/01/17 17:13:07 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_case_rarb_pb(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = ft_search_insert_position_b(b, nbr); 
	if (i < ft_index(a, nbr))
		i = ft_index(a, nbr);
	return (i);
}

int	ft_case_rrarb_pb(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = 0;
	if (a->nbr != nbr)
		i = ft_lst_size(a) - ft_index(a, nbr);
	i += ft_search_insert_position_b(b, nbr);
	return (i);
}

int	ft_case_rarrb_pb(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = 0;
	if (ft_search_insert_position_b(b, nbr))
		i = ft_lst_size(b) - ft_search_insert_position_b(b, nbr);
	i += ft_index(a, nbr);
	return (i);
}

int	ft_case_rrarrb_pb(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = 0;
	if (ft_search_insert_position_b(b, nbr))
		i = ft_lst_size(b) - ft_search_insert_position_b(b, nbr);
	if (a->nbr != nbr && i < (ft_lst_size(a) - ft_index(a, nbr)))
		i = ft_lst_size(a) - ft_index(a, nbr);
	return(i);
}

