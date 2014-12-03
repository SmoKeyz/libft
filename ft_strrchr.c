/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelhaye <fdelhaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:40:30 by fdelhaye          #+#    #+#             */
/*   Updated: 2014/12/02 00:20:48 by fdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	char	d;

	i = ft_strlen(s);
	d = c;
	while (i >= 0 && s[i] != d)
	{
		i--;
		if (!s[i])
			return (NULL);
	}
	return ((char*)s + i);
}
