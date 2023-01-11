/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgutierr <rgutierr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:45:01 by rgutierr          #+#    #+#             */
/*   Updated: 2023/01/11 16:03:25 by rgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include<unistd.h>
int main (void)
{
    int result;

    result = ft_isdigit(22);
    if (result == 1)
        write ( 1, "1", 1);
else
        write (1, "0", 1);
    return (0);
}*/
