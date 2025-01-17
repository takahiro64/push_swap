/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:24:18 by thine             #+#    #+#             */
/*   Updated: 2024/04/25 19:34:25 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	c &= 0xff;
	str = (unsigned char *)s;
	while (n)
	{
		if (c == *str)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
