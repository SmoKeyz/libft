/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelhaye <fdelhaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 23:31:37 by fdelhaye          #+#    #+#             */
/*   Updated: 2014/12/03 00:34:55 by fdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		i;
	int		value;
	int		sig;

	i = 0;
	sig = 1;
	value = 0;
	while (str[i] >= 0 && str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		sig = -sig;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		value *= 10;
		value += (str[i] - '0');
		i++;
	}
	return (value * sig);
}
