/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:58:18 by thine             #+#    #+#             */
/*   Updated: 2025/01/17 17:12:26 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_index(t_stack *stack, int nbr)
{
	int	i;

	i = 0;
	while (stack->nbr != nbr)
	 {
		 i++;
		 if (!stack->next)
			 return(-1);
		 stack = stack->next;
	 }
	 return (i);
}

int	ft_search_insert_position_a(t_stack *a, int nbr)
{
	int	i;
	t_stack *tmp;
	t_stack *tmp2 = a;

	i = 1;
	// printf("SIP\n");
	if (nbr < a->nbr && nbr > ft_lst_last(a)->nbr)
		i = 0;
	else if (nbr > ft_max(a) || nbr < ft_min(a))
		i = ft_index(a, ft_min(a));
	else
	{
		tmp = a->next;
		while((a->nbr > nbr || tmp->nbr < nbr) && tmp->next)
		{
			a = tmp;
			tmp = a->next;
			i++;
		}
	}

	return (i);
}

int	ft_search_insert_position_b(t_stack *b, int nbr)
{
	int	i;
	t_stack *tmp;

	i = 1;
	if (nbr > b->nbr && nbr < ft_lst_last(b)->nbr)
		i = 0;
	else if (nbr > ft_max(b) || nbr < ft_min(b))
		i = ft_index(b, ft_max(b));
	else
	{
		tmp = b->next;
		while(b->nbr < nbr || tmp->nbr > nbr)
		{
			b = tmp;
			tmp = b->next;
			i++;
		}
	}
	return (i);
}
