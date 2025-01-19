/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:58:06 by thine             #+#    #+#             */
/*   Updated: 2025/01/17 17:14:14 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main(int argc, char *argv[])
{	
	t_stack *a;

	a = ft_process(argc, argv);
	if (!a || ft_check_dup(a))
	{
		ft_free_stack(&a);
		ft_error("process");
	}
	if (!ft_checksorted(a))
		ft_push_swap(&a);
	ft_free_stack(&a);
	return (0);
}

t_stack *ft_process(int argc, char *argv[])
{
	t_stack *a;
	int	i;
	int	num;

	i = 1;
	a = NULL;
	if (argc < 2)
		ft_error("argc<2");
	if (argc == 2)
		a = ft_sub_process(argv);
	else
	{
		while(i < argc)
		{
			num = ft_atoi2(argv[i]);
			ft_add_back(&a, ft_stack_new(num));
			i++;
		}
	}
	return (a);
}

t_stack	*ft_sub_process(char *argv[])
{
	t_stack	*a;
	char	**tmp;
	int	i;
	int	num;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], ' ');
	if (!tmp)
		ft_error("split error");
	while (tmp[i])
	{
		num = ft_atoi2(tmp[i]);
		free(tmp[i]);
		ft_add_back(&a, ft_stack_new(num));
		i++;
	}	
	free(tmp);
	return (a);
}

void	ft_push_swap(t_stack **stack_a)
{
	t_stack *stack_b;
	int	i;

	stack_b = NULL;
	if (ft_lst_size(*stack_a) ==2)
		ft_sa(stack_a);
	else
	{
		stack_b = ft_push_b(stack_a);
		stack_a = ft_sort_a(stack_a, &stack_b);
		i = ft_index(*stack_a, ft_min(*stack_a));
		if (i < ft_lst_size(*stack_a) - i)
		{
			while ((*stack_a)->nbr != ft_min(*stack_a))
				ft_ra(stack_a);
		}
		else
		{
			while ((*stack_a)->nbr != ft_min(*stack_a))
				ft_rra(stack_a);
		}
	}
}

void	ft_print_test(t_stack *a, t_stack *b)
{
	printf("\na ");
	while (a)
	{
		printf("%ld ", a->nbr);
		a = a->next;
	}
	printf("\nb ");
	while (b)
	{
		printf("%ld ", b->nbr);
		b = b->next;
	}
	printf("\n");
}