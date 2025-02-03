/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:13:33 by thine             #+#    #+#             */
/*   Updated: 2025/02/03 18:53:50 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi2(char *str, t_stack **a, char ***tmp)
{
	int		sign;
	long	num;

	num = 0;
	sign = 1;
	if (*str == '-')
	{
		str++;
		sign = -1;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		num = num * 10 + sign * (*str - 48);
		if (!ft_isdigit(*str) || num > 2147483647 || num < -2147483648)
		{
			if (tmp)
				ft_free_double_point(*tmp);
			ft_error(a);
		}
		str++;
	}
	return (num);
}

void	ft_add_back(t_stack **stack, t_stack *content)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = content;
	else
		(ft_lst_last(*stack))->next = content;
}

t_stack	*ft_stack_new(int nbr)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		ft_error(&new);
	new->nbr = nbr;
	new->next = NULL;
	return (new);
}

void	ft_free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

void	ft_free_double_point(char **tmp)
{
	int	i;

	i = 0;
	if (!tmp)
		return ;
	while (tmp[i])
	{
		free(tmp[i]);
		tmp[i] = NULL;
		i++;
	}
	free(tmp);
}
