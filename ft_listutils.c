/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listutils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:40:16 by thine             #+#    #+#             */
/*   Updated: 2025/01/15 16:18:25 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	(ft_lstlast(*lst))->next = new;
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	ft_lstsize(t_stack *lst)
{
	size_i;

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

	min = lst-> nbr;
	while (lst)
	{
		if (lst->nbr < min)
			min = lst->nbr;
		lst = lst->next;
	}
	return (i);
}

int	ft_max(t_stack *lst)
{
	int	max;

	max = lst-> nbr;
	while (lst)
	{
		if (lst->nbr < max)
			max = lst->nbr;
		lst = lst->next;
	}
	return (i);
}
