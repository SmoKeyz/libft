/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 15:06:56 by fdelhaye          #+#    #+#             */
/*   Updated: 2014/12/03 00:52:06 by fdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char *)malloc((sizeof(tmp)) * (len + 1));
	if (tmp == NULL)
		return (NULL);
	while (i < len)
	{
		tmp[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((char *)dest)[i] = tmp[i];
		i++;
	}
	return (dest);
}
