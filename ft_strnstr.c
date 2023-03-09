/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelias-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:15:05 by aelias-s          #+#    #+#             */
/*   Updated: 2023/03/09 16:29:01 by aelias-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *src, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	if (src[0] == '\0')
		return ((char *)dest);
	i = 0;
	while (dest[i] && i < len)
	{
		j = 0;
		while ((dest[i + j] == src[j]) && (i + j) < len)
		{
			if (src [j + 1] == '\0')
				return ((char *)(dest + i));
			j++;
		}
		i++;
	}
	return (0);
}
