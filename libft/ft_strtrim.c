/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:08:13 by thine             #+#    #+#             */
/*   Updated: 2024/06/01 20:54:30 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		index1;
	int		index2;
	int		index;

	if (!s1 || !set)
		return (NULL);
	index1 = 0;
	index2 = ft_strlen(s1);
	index = 0;
	while (ft_strchr(set, s1[index1]) && index1 < index2)
		index1++;
	while (ft_strchr(set, s1[index2 - 1]) && index1 < index2)
		index2--;
	str = (char *)ft_calloc(index2 - index1 + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (index1 < index2)
		str[index++] = s1[index1++];
	return (str);
}
//
//#include<stdio.h>
//void	ft_print_result(char const *s)
//{
//	int		len;
//
//	len = 0;
//	while (s[len])
//		len++;
//	write(1, s, len);
//}
//
//int	main()
//{
//	char *strtrim;
//	char s1[] = "          ";
//    if (!(strtrim = ft_strtrim(s1, " ")))
//        ft_print_result("NULL");
//    else
//        ft_print_result(strtrim);
//    if (strtrim == s1)
//        ft_print_result("\nA new string was not returned");
//}
