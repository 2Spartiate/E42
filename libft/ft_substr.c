/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:21:17 by gderrien          #+#    #+#             */
/*   Updated: 2024/10/17 16:21:17 by gderrien         ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen_internal(s))
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	if (len > ft_strlen_internal(s + start))
		len = ft_strlen_internal(s + start);
	i = 0;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	while ((i < len) && (s[start + i] != '\0'))
	{
		result[i] = s[start + i];
		i ++;
	}
	result[i] = '\0';
	return (result);
}
