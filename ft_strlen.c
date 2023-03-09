/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06ft_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgutierr <rgutierr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:11:36 by rgutierr          #+#    #+#             */
/*   Updated: 2023/03/09 21:18:44 by rgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	string;

	string = ft_strlen("feliz año!");
	printf("%d", string);
	return (0);
}*/
