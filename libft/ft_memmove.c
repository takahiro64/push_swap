/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 04:32:07 by thine             #+#    #+#             */
/*   Updated: 2024/05/30 15:06:34 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long long	i;
	unsigned char		*ptr;
	const unsigned char	*str;

	ptr = (unsigned char *) dst;
	str = (const unsigned char *) src;
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			*ptr++ = *str++;
			i++;
		}
	}
	else if (dst > src)
	{
		while (len)
		{
			ptr[len - 1] = str[len - 1];
			len--;
		}
	}
	return (dst);
}
