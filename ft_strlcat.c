/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 12:07:38 by fdelhaye          #+#    #+#             */
/*   Updated: 2014/12/02 00:09:43 by fdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, char const *src, size_t len)
{
	size_t		lendst;
	size_t		lensrc;
	size_t		i;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen((char *)src);
	i = 0;
	if (len < lendst)
		return (lensrc + len);
	while (src[i] && lendst + i + 1 < len)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
