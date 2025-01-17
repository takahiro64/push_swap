/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 05:46:26 by thine             #+#    #+#             */
/*   Updated: 2024/05/30 15:11:07 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = 0;
	while (src[len])
		len++;
	if (dstsize != 0)
	{
		while (--dstsize > 0 && *src)
			*dst++ = *src++;
		*dst = 0;
	}
	return (len);
}
