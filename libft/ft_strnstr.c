/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:33:04 by thine             #+#    #+#             */
/*   Updated: 2024/06/27 15:11:55 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack && !len)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j])
			{
				j++;
				if (i + j > len)
					return (NULL);
				if (!needle[j])
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
// int main(){
// 	char *needle1 = calloc(100, sizeof(char));
// 	char *needle2 = calloc(100, sizeof(char));
// 	for (int i = 0; i < 99; i++)
// 	{
// 		needle1[i] = i + 1;
// 		needle2[i] = i + 1;
// 	}
// 	printf("ft_strnstr : %s\n",ft_strnstr(NULL,needle1,0));
// 	printf("   strnstr : %s\n",strnstr(NULL,needle2,0));
// }
