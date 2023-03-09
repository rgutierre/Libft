/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgutierr <rgutierr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:48:38 by rgutierr          #+#    #+#             */
/*   Updated: 2023/03/09 21:25:35 by rgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *x, int y)
{
	unsigned char	z;

	z = (unsigned char)y;
	while (*x != '\0')
	{
		if (*x == z)
			return ((char *)x);
		x++;
	}
	if (z == '\0')
		return ((char *)x);
	return (NULL);
}
