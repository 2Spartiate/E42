/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:27:30 by gderrien          #+#    #+#             */
/*   Updated: 2024/10/27 12:27:30 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_internal(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size1;
	size_t	size2;
	char	*result;
	size_t	i;
	size_t	j;

	size1 = ft_strlen_internal(s1);
	size2 = ft_strlen_internal(s2);
	result = malloc(size1 + size2 + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < size1)
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < size2)
		result[i++] = s2[j++];
	result[i] = '\0';
	return (result);
}
