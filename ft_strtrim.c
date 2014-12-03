/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 12:43:59 by fdelhaye          #+#    #+#             */
/*   Updated: 2014/12/03 01:06:14 by fdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_strlenspaces(char *s)
{
	int				i;
	int				res;

	res = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
		if (s[i] == '\0')
			return (0);
	}
	while (s[i] != '\0')
	{
		i++;
		res++;
	}
	i--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i--;
		res--;
	}
	return (res);
}

char				*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			len;
	char			*ret;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlenspaces((char *)s);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
	}
	ret = ft_strsub(s, i, len);
	ret[len] = 0;
	return (ret);
}
