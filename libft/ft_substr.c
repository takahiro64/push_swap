/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:56:40 by thine             #+#    #+#             */
/*   Updated: 2024/06/27 15:12:10 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		size;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start || len == 0)
		size = 0;
	else if (ft_strlen(s) - start < len)
		size = ft_strlen(s) - start;
	else
		size = len;
	str = (char *)malloc((sizeof(char)) * (size + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s + start, size);
	str[size] = '\0';
	return (str);
}
