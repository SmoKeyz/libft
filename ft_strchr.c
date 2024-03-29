/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelhaye <fdelhaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:26:19 by fdelhaye          #+#    #+#             */
/*   Updated: 2014/12/02 23:04:35 by fdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	if (str[i] == c)
		return (&str[i]);
	else
		return ('\0');
}
