/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelias-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:15:05 by aelias-s          #+#    #+#             */
/*   Updated: 2023/03/18 13:14:40 by aelias-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	i;

	i = 1;
	if (n == -2147483648)
		return (12);
	if (n == 0)
		return (2);
	if (n < 0)
	{
		i++;
		n = n * (-1);
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*num;

	len = ft_intlen(n) - 1;
	num = (char *)malloc((len * sizeof(char)) + 1);
	if (!num)
		return (NULL);
	num[0] = '-';
	if (n == 0)
		num[0] = '0';
	num[len] = '\0';
	if (n > 0)
		n = n * (-1);
	while (n < 0)
	{
		len--;
		num[len] = ((n % (-10)) * (-1)) + 48;
		n = n / 10;
	}
	return (num);
}
