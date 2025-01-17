/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 04:26:09 by thine             #+#    #+#             */
/*   Updated: 2024/05/30 19:04:48 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*chr;

	ptr = (unsigned char *)dst;
	chr = (unsigned char *)src;
	if (src || dst)
	{
		while (n > 0)
		{
			*ptr++ = *chr++;
			n--;
		}
	}
	return (dst);
}
