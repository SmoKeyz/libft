/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 11:44:24 by fdelhaye          #+#    #+#             */
/*   Updated: 2014/12/02 00:15:05 by fdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	int		cmp;
	int		tmp;

	i = 0;
	cmp = 0;
	while (i < n && (s1 != '\0' && s2 != '\0'))
	{
		tmp = s1[i] - s2[i];
		cmp = cmp + tmp;
		i++;
	}
	return (cmp);
}
