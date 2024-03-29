/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelias-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:45:51 by aelias-s          #+#    #+#             */
/*   Updated: 2023/02/21 18:54:48 by aelias-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int	aux;

	aux = 0;
	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(fd, "-", 1);
			nb = nb * -1;
		}
		aux = nb % 10;
		nb = nb / 10;
		if (nb > 0)
		{
			ft_putnbr_fd(nb, fd);
		}
		aux = aux + 48;
		write(fd, &aux, 1);
	}
}
