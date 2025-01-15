/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:58:06 by thine             #+#    #+#             */
/*   Updated: 2025/01/15 20:16:51 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char *argv[])
{	
	t_stack *a;

	a = ft_process(argc, argv);
	if (!a || ft_(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!ft_checksorted(a))
		ft_sort(&a);
	ft_free(&a);
	return (0);
}

void ft_error(void)
{
	write(2, "Error/n", 6);
	exit(1);
}

int	ft_(t_stack *a)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->nbr == tmp->nbr)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
}

t_stack ft_process(int argc, char *argv[])
{
	t_stack *a;
	int	i;
	int	num;

	i = 1;
	a = NULL;
	if (argc < 2)
		ft_error();
	if (argc == 2)
		a = ft_sub_process(argv);
	else
	{
		while(i < argc)
		{
			num = ft_atoi(argv[i]);
			ft_add_back(&a, ft_new_stack(num));
			i++;
		}
	}
	return (a);
}

t_stack	ft_sub_process(char *argv[])
{
	t_stack	*a;
	char	**tmp;
	int	i;
	int	num;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], " ");
	while (tmp[i])
	{
		j = ft_atoi(tmp[i]);
		ft_add_back(&a, ft_stack_new(j));
		i++;
	}
//	ft_freestr(tmp);
	free(tmp);
	return (a);
}

int	ft_atoi(char	*str)
{
	int	sign;
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
			ft_error();
		num = num *10 + (*str - 48);
		str++;
	}
	if ((num > 2147483647 + (1 - sign) / 2)
		ft_error();
	return (sign * num);
}
