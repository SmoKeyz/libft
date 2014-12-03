/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 21:29:00 by fdelhaye          #+#    #+#             */
/*   Updated: 2014/12/03 00:59:12 by fdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_tab(char const *s, char c)
{
	size_t	i;
	int		f;

	f = 0;
	i = 0;
	while (*s != '\0')
	{
		if (f == 1 && *s == c)
			f = 0;
		if (f == 0 && *s != c)
		{
			f = 1;
			i++;
		}
		s++;
	}
	return (i);
}

size_t	ft_lens(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != c && *s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		cpt;
	size_t	i;

	i = 0;
	if (s)
	{
		cpt = ft_count_tab(s, c);
		str = (char **)malloc((sizeof(str)) * (ft_count_tab(s, c) + 1));
		if (str == NULL)
			return (NULL);
		while (cpt--)
		{
			while (*s == c && *s != '\0')
				s++;
			str[i] = ft_strsub(s, 0, ft_lens(s, c));
			if (str[i] == NULL)
				return (NULL);
			s = s + ft_lens(s, c);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
