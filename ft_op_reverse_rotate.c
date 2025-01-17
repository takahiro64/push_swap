/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:36:42 by thine             #+#    #+#             */
/*   Updated: 2025/01/17 17:11:37 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_reverse_rotate(t_stack **a)
{
	t_stack	*last;
	t_stack	*prev;

	if (!*a || !(*a)->next)
		return ;
	last = *a;
	prev = NULL;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *a;
	*a = last;
}

void	ft_rra(t_stack **a)
{
	ft_reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **b)
{
	ft_reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	write(1, "rrr\n", 4);
}
