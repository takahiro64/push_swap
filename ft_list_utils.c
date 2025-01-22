/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:40:16 by thine             #+#    #+#             */
/*   Updated: 2025/01/17 17:11:04 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lst_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	ft_lst_size(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int	ft_min(t_stack *lst)
{
	int	min;

	min = lst->nbr;
	while (lst)
	{
		if (lst->nbr < min)
			min = lst->nbr;
		lst = lst->next;
	}
	return (min);
}

int	ft_max(t_stack *lst)
{
	int	max;

	max = lst->nbr;
	while (lst->next)
	{
		if (lst->nbr > max)
			max = lst->nbr;
		lst = lst->next;
	}
	if (lst->nbr > max)
		max = lst->nbr;
	return (max);
}
