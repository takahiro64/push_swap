/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:56:31 by thine             #+#    #+#             */
/*   Updated: 2025/01/17 17:11:46 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_rotate(t_stack **a)
{
	t_stack *tmp;
	t_stack	*last;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	last = ft_lst_last(*a);
	*a = tmp->next;
	tmp->next = NULL;
	last->next = tmp;
}

void	ft_ra(t_stack **a)
{
	ft_rotate(a);
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack **b)
{
	ft_rotate(b);
	write(1, "rb\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
	write(1, "rr\n", 3);
}
