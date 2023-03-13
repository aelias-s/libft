/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelias-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:15:05 by aelias-s          #+#    #+#             */
/*   Updated: 2023/03/13 12:54:58 by aelias-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*dest;
	size_t	j;

	i = start;
	l = (size_t)ft_strlen(s);
	if (((l - start) != 0 && (l - start) < len) || start >= l)
		return (0);
	dest = (char *)malloc((sizeof(char) * len) + 1);
	if (!dest)
		return (NULL);
	j = 0;
	while (s[i] && len > 0)
	{
		dest[j] = s[i + j];
		j++;
		len--;
	}
	dest[j] = '\0';
	return (dest);
}
