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
#include <stdio.h>

char	*ft_strmapi(const char *s, char (*funcion)(unsigned int n, char c))
{
	char	*patata;
	size_t	i;

	if (!s || !funcion)
		return (NULL);
	patata = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!patata)
		return (NULL);
	i = 0;
	while (s[i])
	{
		patata[i] = funcion(i, s[i]);
		i++;
	}
	patata[i] = '\0';
	return (patata);
}
