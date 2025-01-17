/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 11:19:34 by thine             #+#    #+#             */
/*   Updated: 2024/06/22 11:24:59 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		len;
	int		i;

	i = 0;
	if (s == NULL)
		return ;
	len = ft_strlen(s);
	while (i < len)
	{
		(*f)(i, &s[i]);
		i++;
	}
}
