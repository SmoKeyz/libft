/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 15:02:46 by fdelhaye          #+#    #+#             */
/*   Updated: 2014/12/03 00:32:20 by fdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *s1, const char *s2)
{
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	j = 0;
	k = ft_strlen(s2);
	if (k == 0)
		return ((char *)s1);
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] != '\0')
		{
			j++;
			if (j == k)
				return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}
