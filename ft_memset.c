/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgutierr <rgutierr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:40:41 by rgutierr          #+#    #+#             */
/*   Updated: 2023/03/09 21:13:19 by rgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int b, size_t len)
{
	unsigned char	*i;

	i = a;
	while (len--)
	{
		*i++ = (unsigned char)b;
	}
	return (a);
}
