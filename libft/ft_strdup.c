/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:56:16 by thine             #+#    #+#             */
/*   Updated: 2024/05/30 19:37:52 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = NULL;
	s2 = (char *)malloc((sizeof(char)) * (ft_strlen(s1) + 1));
	if (!s2)
		return (NULL);
	return (ft_memcpy(s2, s1, ft_strlen(s1) + 1));
}
