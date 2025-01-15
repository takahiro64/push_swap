/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:58:18 by thine             #+#    #+#             */
/*   Updated: 2025/01/15 16:19:44 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_index(t_stack stack, int nbr)
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

	i = 1;
	if (nbr > a->nbr && nbr < ft_lstlast(a)->nbr)
		i = 0;
	else if (nbr > ft_max(a) || nbr < ft_min(a))
		i = ft_index(b, ft_min(b));
	else
	{
		tmp = a->next;
		while(a->nbr < nbr || tmp->nbr > nbr)
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
	if (nbr > b->nbr && nbr < ft_lstlast(b)->nbr)
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
