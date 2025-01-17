/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 20:23:29 by thine             #+#    #+#             */
/*   Updated: 2024/06/27 15:10:46 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	count_word(char *s, char c)
{
	int	res;
	int	is_inword;

	res = 0;
	is_inword = 0;
	while (*s)
	{
		if (*s != c && !is_inword)
		{
			is_inword = 1;
			res++;
		}
		else if (*s == c)
			is_inword = 0;
		s++;
	}
	return (res);
}

static int	word_len(char *s, char c)
{
	int	res;

	res = 0;
	while (*s && *s != c)
	{
		res++;
		s++;
	}
	return (res);
}

static void	*free_s(char **res)
{
	int	i;

	i = 0;
	while (res[i])
		free(res[i++]);
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	res = (char **)ft_calloc(count_word((char *)s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			res[i] = ft_substr(s, 0, word_len((char *)s, c));
			if (!res[i++])
				return (free_s(res));
			s += word_len((char *)s, c);
		}
		else
			s++;
	}
	return (res);
}
