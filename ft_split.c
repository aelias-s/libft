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

char	*ft_strchr_2(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != (char)c && s[i] != '\0')
		i++;
	if (s[i] == (char)c && s[i + 1] != '\0')
		return ((char *)s + i + 1);
	else
		return (0);
}

char	*ft_strchr_rev(const char *s, int c, int words, int comp)
{
	size_t	i;

	i = 0;
	while ((s[i] != (char)c && s[i] != '\0') && words != comp)
		i++;
	if (s[i] == (char)c)
		return (ft_substr((char *)s, 0, i));
	if (words == comp)
		return (ft_substr((char *)s, 0, ft_strlen(s)));
	else
		return (0);
}

static int	nwords(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
		if (s[i + 1] == '\0')
			break ;
	}
	return (count + 1);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	char	*s2;
	int		words;
	int		i;

	s2 = (char *)s;
	words = nwords(s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	i = 0;
	while (i < words)
	{
		res[i] = ft_strchr_rev(s2, c, words, i + 1);
		s2 = ft_strchr_2(s2, c);
		i++;
	}
	return (res);
}


/*
 LA MOVIDA ES QUE SOLO GUARDA EN EL STR CUANDO ENCUENTRA EL ESPACIO. TIENES QUE DETECTAR TAMBIEN 
 SI ES EL NULO DEL FINAL
 */