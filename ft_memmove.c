/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgutierr <rgutierr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:46:40 by rgutierr          #+#    #+#             */
/*   Updated: 2023/03/09 21:12:29 by rgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a_src;
	unsigned char	*b_dst;

	if (!dst && !src)
		return (NULL);
	a_src = (unsigned char *)src;
	b_dst = (unsigned char *)dst;
	if (len == 0 || b_dst == a_src)
		return (dst);
	if (b_dst > a_src)
	{
		a_src += len - 1;
		b_dst += len - 1;
		while (len--)
			*b_dst-- = *a_src--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
