/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:13:33 by thine             #+#    #+#             */
/*   Updated: 2025/01/19 13:57:21 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi2(char *str)
{
	int				sign;
	long long int	num;

	num = 0;
	sign = 1;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_error("isdigit");
		num = num * 10 + (*str - 48);
		str++;
	}
	if ((num > (long long int)2147483647 + (1 - sign) / 2))
		ft_error("over int");
	return (sign * num);
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
		ft_error("new stack");
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
