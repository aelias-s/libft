/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelias-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:15:05 by aelias-s          #+#    #+#             */
/*   Updated: 2023/03/08 16:28:16 by aelias-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	i;

	i = 0;
	dest_size = ft_strlen(dest);
	while (dest[i] || i < (size + dest_size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (i);
}
