/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelias-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:15:05 by aelias-s          #+#    #+#             */
/*   Updated: 2023/03/08 16:29:16 by aelias-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (src[i] != '\0')
		i++;
	while (src[c] != '\0' && (c < (size - 1)) && size != 0)
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return ((size_t)i);
}
