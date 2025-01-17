/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <thine@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 06:01:53 by thine             #+#    #+#             */
/*   Updated: 2024/05/30 21:10:51 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	index;

	dstlen = 0;
	srclen = 0;
	index = 0;
	while (src[srclen])
		srclen++;
	if (dst == NULL && dstsize == 0)
		return (srclen);
	while (dst[dstlen] && dstlen < dstsize)
		dstlen++;
	if (dstlen == dstsize)
		return (srclen + dstsize);
	while (dstsize - 1 > dstlen + index && srclen > index)
	{
		dst[dstlen + index] = src[index];
		index++;
	}
	dst[dstlen + index] = 0;
	return (dstlen + srclen);
}

// int main(){
// 	char *src1 = calloc(100, sizeof(char));
// 	char *src2 = calloc(100, sizeof(char));
// 	for (int i = 0; i < 99; i++)
// 	{
// 		src1[i] = i + 1;
// 		src2[i] = i + 1;
// 	}
// 	printf("ft_strlcat %zu : \n",ft_strlcat(NULL,src1,0));
// 	printf("   strlcat %zu : \n",strlcat(NULL,src2,0));
// }
