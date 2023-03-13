/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelias-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:15:05 by aelias-s          #+#    #+#             */
/*   Updated: 2023/03/09 17:55:39 by aelias-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*aux;

	aux = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		*(aux + i) = *(unsigned char *)(src + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(dest + i) = *(aux + i);
		i++;
	}
	return (dest);
}
