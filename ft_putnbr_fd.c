/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 04:08:26 by fdelhaye          #+#    #+#             */
/*   Updated: 2014/12/01 23:53:41 by fdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		nbr = n % 10;
		nbr += '0';
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(nbr, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
