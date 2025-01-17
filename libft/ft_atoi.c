/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:27:22 by thine             #+#    #+#             */
/*   Updated: 2024/05/30 14:57:59 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || (c > 8 && c < 14))
		return (1);
	return (0);
}

static int	ft_countnum(char *st, int sign)
{
	unsigned long long int	max_num;
	unsigned long long int	num;

	num = 0;
	max_num = 9223372036854775807;
	while (*st)
	{
		if (*st < '0' || *st > '9')
			return ((int)(num * sign));
		if (num * 10 > max_num + 1 - *st + '0' && sign == -1)
			return (0);
		else if (num * 10 > max_num - *st + '0' && sign == 1)
			return ((int)4294967295);
		num = num * 10 + *st - '0';
		st++;
	}
	return ((int)(num * sign));
}

int	ft_atoi(const char *str)
{
	char	*st;
	int		sign;

	st = (char *)str;
	sign = 1;
	while (ft_isspace(*st))
		st++;
	if (*st == '+')
		st++;
	else if (*st == '-')
	{
		st++;
		sign = -1;
	}
	return (ft_countnum(st, sign));
}
//#include<stdio.h>
//int	main()
//{
//	//char	*num1="9223372036854775806";
//	//char	*num2="9223372036854775807";
//	//char	*num3="9223372036854775808";
//	char	*num1="-9223372036854775807";
//	char	*num2="-9223372036854775808";
//	char	*num3="-9223372036854775809";
//// 	char	*num1="0";
//// 	char	*num2="945";
//// 	char	*num3="-085";
//	printf("num1=%s\n",num1);
//	printf("ft_atoi:%lu\n",ft_atoi(num1));
//	printf("   atoi:%lu\n",atoi(num1));
//	printf("num2=%s\n",num2);
//	printf("ft_atoi:%lu\n",ft_atoi(num2));
//	printf("   atoi:%lu\n",atoi(num2));
//	printf("num3=%s\n",num3);
//	printf("ft_atoi:%lu\n",ft_atoi(num3));
//	printf("   atoi:%lu\n",atoi(num3));
//}
