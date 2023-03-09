/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgutierr <rgutierr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:15:51 by rgutierr          #+#    #+#             */
/*   Updated: 2023/03/09 21:17:32 by rgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	//if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
	//	|| (c >= 'a' && c <= 'z'))
	if (ft_isalpha(c) && ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*
#include<unistd.h>

int	main(void)
{
	int	result;

	result = ft_isalnum('\161');
	if (result == 1)
		write (1, "1", 1);
	else
		write (1, "0", 1);
	return (0);
}*/
