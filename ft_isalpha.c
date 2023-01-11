/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgutierr <rgutierr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:23:59 by rgutierr          #+#    #+#             */
/*   Updated: 2023/01/11 15:42:30 by rgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
#include<unistd.h>
int main (void)
{
	int result;

	result = ft_isalpha(116);
	if (result == 1)
		write ( 1, "1", 1);
	else
		write (1, "0", 1);
	return (0);
}*/
