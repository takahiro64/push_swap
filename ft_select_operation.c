/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_operation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:11:17 by thine             #+#    #+#             */
/*   Updated: 2025/01/17 17:12:37 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

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
