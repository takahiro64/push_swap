/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:12:42 by thine             #+#    #+#             */
/*   Updated: 2024/05/30 15:29:59 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned long long	len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	if (!(char) c)
	{
		return ((char *)s);
	}
	s--;
	while (len)
	{
		if (*s == (char)c)
			return ((char *)s);
		len--;
		s--;
	}
	return (0);
}
