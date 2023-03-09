/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgutierr <rgutierr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:49:15 by rgutierr          #+#    #+#             */
/*   Updated: 2023/03/09 21:32:29 by rgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *x, int y)
{
	int	i;

	i = 0;
	if (y > 256)
		y %= 256;
	while (x[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (x[i] == y)
			return ((char *)x + i);
		i--;
		if (i < 0)
			break ;
	}
	return (NULL);
}
