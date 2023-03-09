/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgutierr <rgutierr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:47:29 by rgutierr          #+#    #+#             */
/*   Updated: 2023/03/09 21:11:38 by rgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;
	size_t	len;

	x = 0;
	y = 0;
	while (dst[x] != '\0')
	{
		x++;
	}
	len = x;
	if (dstsize <= len)
	{
		return (dstsize + ft_strlen(src));
	}
	while (src[y] != '\0' && x < dstsize - 1)
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	dst[x] = '\0';
	return (len + ft_strlen(src));
}
