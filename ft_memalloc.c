/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 15:53:49 by fdelhaye          #+#    #+#             */
/*   Updated: 2014/12/01 22:01:42 by fdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;

	if (size == 0)
		return (NULL);
	mem = (char *)malloc((sizeof(mem)) * (size + 1));
	if (!mem)
		return (NULL);
	ft_memset(mem, 0, size);
	return ((void *)mem);
}
