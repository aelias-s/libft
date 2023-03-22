/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelias-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:15:05 by aelias-s          #+#    #+#             */
/*   Updated: 2023/03/09 16:36:13 by aelias-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*cut;

	start = 0;
	if (*s1 == 0)
		return (ft_calloc(1, 1));
	while ((s1[start] && ft_strchr(set, s1[start])))
	{
		if (s1[start + 1] == '\0')
			return ((char *)s1 + (ft_strlen(s1)));
		start++;
	}
	end = ft_strlen(s1) - 1;
	while ((s1[end] && ft_strrchr(set, s1[end])))
		end--;
	cut = ft_substr(s1, start, (size_t)((end + 1) - start));
	return (cut);
}
